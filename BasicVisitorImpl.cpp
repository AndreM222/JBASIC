#include "BasicVisitorImpl.h"
#include <any>
#include <iostream>
#include <ostream>
#include <vector>

std::unordered_map <BasicParser::LinenumberContext*, BasicParser::LineContext*> listOfLines;
std::unordered_map<std::string, std::any> varValues;

void BasicVisitorImpl::visitFile(BasicParser::ProgContext *fileContext)
{
    for(BasicParser::LineContext* currLine : fileContext->line())
    {
        listOfLines.insert({currLine->linenumber(), currLine});
        visitAction(currLine->linenumber());
    }
}

void BasicVisitorImpl::visitAction(BasicParser::LinenumberContext *lineNumber)
{
    for(auto rule : listOfLines[lineNumber]->amprstmt())
    {
        if(!rule->statement()) continue;

        statementAction(rule);
    }
}

void BasicVisitorImpl::statementAction(BasicParser::AmprstmtContext *rule)
{
        // Print Function
        if(rule->statement()->printstmt1())
        {
            BasicParser::PrintlistContext* printList = rule->statement()->printstmt1()->printlist();

            for(BasicParser::ExpressionContext* action : printList->expression())
            {
                // Get casted variable value
                std::string msg = numToStringCast(expAction(action));

                // Print if value exists
                if (!msg.empty()) std::cout << msg << std::endl;
            }
        }

        // Make Variable
        if(rule->statement()->letstmt())
        {
            BasicParser::VariableassignmentContext* expr = rule->statement()->letstmt()->variableassignment();

            for(auto action : expr->exprlist()->expression())
            {
                std::string variableName = expr->vardecl()->var_()->varname()->getText();

                // Set variable
                varValues[variableName] = expAction(action);
            }
        }
}

std::any BasicVisitorImpl::expAction(BasicParser::ExpressionContext *expr)
{
    if(!expr->relationalExpression().empty())
    {
        return addMathAction(expr->relationalExpression());
    }

    if(expr->func_())
    {
        return funcAction(expr->func_());
    }

    return {};
}

std::any BasicVisitorImpl::funcAction(BasicParser::Func_Context *funcType)
{
    // Normal String
    if(funcType->STRINGLITERAL())
    {
        std::string value = funcType->getText();
        return value.substr(1, value.size() - 2);
    }

    if(funcType->vardecl())
    {
        if(varValues.find(funcType->vardecl()->getText()) != varValues.end())
        {
            auto variable = varValues.find(funcType->vardecl()->getText())->second;

            return variable;
        }
    }

    if(funcType->number())
    {
        return stringToNumberCast(funcType->getText());
    }

    if(funcType->vardecl())
    {
        if(varValues.find(funcType->vardecl()->getText()) != varValues.end())
        {
            return varValues.find(funcType->vardecl()->getText())->second;
        }

        return nullptr;
    }

    return {};
}

std::any BasicVisitorImpl::addMathAction(std::vector<BasicParser::RelationalExpressionContext*> expr) {
    double value = 0;
    std::vector<std::any> operand;

    for (BasicParser::RelationalExpressionContext* currExp : expr) {
        for (BasicParser::AddingExpressionContext* action : currExp->addingExpression()) {
            // Delegate to multMathAction to compute the full multiplyingExpression.
            std::vector<std::any> tmpVals = multMathAction(action->multiplyingExpression());
            operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());

            // std::cout << "======================="<< action->getText() <<"======================" <<  std::endl;
            // std::cout << "Processing AddMathAction Node: " << action->getText() << std::endl;

            for(auto i = 0; i < action->PLUS().size(); i++)
            {
                value = std::any_cast<double>(operand.back());
                operand.pop_back();
                operand.back() =  std::any_cast<double>(operand.back()) + value;
                // std::cout << "Adding operand: " << value << ", New Value: " << std::any_cast<double>(operand.back()) << std::endl;
            }

            for(auto i = 0; i < action->MINUS().size(); i++) {
                value = std::any_cast<double>(operand.back());
                operand.pop_back();
                operand.back() = std::any_cast<double>(operand.back()) - value;
                // std::cout << "Subtracting operand: " << value << ", New Value: " << std::any_cast<double>(operand.back()) << std::endl;
            }
        }
    }

    // // std::cout << "Final computed value in addMathAction: " << std::any_cast<double>(operand.front()) << std::endl;
    return numToNumCast(operand.front());
}

std::vector<std::any> BasicVisitorImpl::multMathAction(std::vector<BasicParser::MultiplyingExpressionContext*> mulExpr) {
    double value = 0;  // Start with 0 as the initial value.
    std::vector<std::any> operand;

    for (BasicParser::MultiplyingExpressionContext* action : mulExpr) {

        std::vector<std::any> tmpVals = expoMathAction(action->exponentExpression());
        operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());
        // std::cout << "======================="<< action->getText() <<"======================" <<  std::endl;
        // std::cout << "Processing MultMathAction Node: " << action->getText() << std::endl;

        for(auto i = 0; i < action->TIMES().size(); i++)
        {
            value = std::any_cast<double>(operand.back());  // Apply multiplication.value
            operand.pop_back();  // Apply multiplication.
            operand.back() = std::any_cast<double>(operand.back()) * value;
            // std::cout << "Multiplying operand: " << value << ", New Value: " << std::any_cast<double>(operand.front()) << " Size: " << action->TIMES().size() << std::endl;
        }

        for(auto i = 0; i < action->DIV().size(); i++)
        {
            value = std::any_cast<double>(operand.back());  // Apply multiplication.
            operand.pop_back();  // Apply multiplication.
            operand.back() = std::any_cast<double>(operand.back()) / value;
            action->DIV().pop_back();
            // std::cout << "Dividing operand: " << value << ", New Value: " << std::any_cast<double>(operand.back()) << std::endl;
        }
    }

    // std::cout << "Final computed value in multMathAction: " << std::any_cast<double>(operand[0]) << std::endl;
    return operand;
}

std::vector<std::any> BasicVisitorImpl::expoMathAction(std::vector<BasicParser::ExponentExpressionContext*> expoExpr) {
    std::vector<std::any> value;

    for (BasicParser::ExponentExpressionContext* action : expoExpr) {
        std::any base = signMathAction(action->signExpression());

        // std::cout << "======================="<< action->getText() <<"======================" <<  std::endl;
        if (!action->EXPONENT().empty()) {
            // value = pow(value, base); // Exponentiation.
        } else {
            value.push_back(base); // Default case.
        }
    }

    // std::cout << "Computed value in expoMathAction: " << std::any_cast<double>(value.front()) << std::endl; // Debugging output.

    return value;
}

std::any BasicVisitorImpl::signMathAction(std::vector<BasicParser::SignExpressionContext*> signExpr) {
    for (BasicParser::SignExpressionContext* action : signExpr) {
        // std::cout << "======================="<< action->getText() <<"======================" <<  std::endl;
        if (action->func_()) {
            double result = std::stod(numToStringCast(funcAction(action->func_())));
            // std::cout << "Value in signMathAction: " << result << std::endl; // Debugging output.
            // std::cout << "Symbol in signMathAction: " << action->getText() << std::endl; // Debugging output.
            return result;
        }
    }

    return 0.0;
}
