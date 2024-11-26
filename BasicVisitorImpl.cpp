#include "BasicVisitorImpl.h"
#include <iostream>
#include <ostream>

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

std::any BasicVisitorImpl::addMathAction(std::vector<BasicParser::RelationalExpressionContext*> expr)
{
    double value = 0;
    std::vector<std::any> operand;

    for (BasicParser::RelationalExpressionContext* currExp : expr)
    {
        for (BasicParser::AddingExpressionContext* action : currExp->addingExpression())
        {
            std::vector<std::any> tmpVals = multMathAction(action->multiplyingExpression());
            operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());

            int totalMinus = action->MINUS().size();
            int totalPlus = action->PLUS().size();
            int minusPos = 0, plusPos = 0;

            std::string currGroup = action->getText();

            while(totalMinus && totalPlus)
            {
                int difference = currGroup.find_last_of('+' + plusPos) - currGroup.find_last_of('-' + minusPos);

                if(difference > 0)
                {
                    value = std::any_cast<double>(operand.back());
                    operand.pop_back();
                    operand.back() =  std::any_cast<double>(operand.back()) + value;

                    totalPlus--;
                    plusPos++;
                }
                else {
                    value = std::any_cast<double>(operand.back());
                    operand.pop_back();
                    operand.back() = std::any_cast<double>(operand.back()) - value;

                    totalMinus--;
                    minusPos++;
                }
            }

            while(totalPlus)
            {
                value = std::any_cast<double>(operand.back());
                operand.pop_back();
                operand.back() = std::any_cast<double>(operand.back()) + value;
                operand.back() = std::any_cast<double>(operand.back()) + value;

                totalPlus--;
            }

            while(totalMinus)
            {
                value = std::any_cast<double>(operand.back());
                operand.pop_back();
                operand.back() = std::any_cast<double>(operand.back()) - value;

                totalMinus--;
            }
        }
    }

    return numToNumCast(operand.front());
}

std::vector<std::any> BasicVisitorImpl::multMathAction(std::vector<BasicParser::MultiplyingExpressionContext*> mulExpr)
{
    double value = 0;  // Start with 0 as the initial value.
    std::vector<std::any> operand;

    for (BasicParser::MultiplyingExpressionContext* action : mulExpr)
    {

        std::vector<std::any> tmpVals = expoMathAction(action->exponentExpression());
        operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());

        int totalTimes = action->TIMES().size();
        int totalDivides = action->DIV().size();
        int timesPos = 0, dividesPos = 0;

        std::string currGroup = action->getText();

        while (totalTimes && totalDivides)
        {
            int difference = currGroup.find_last_of('*' + timesPos) - currGroup.find_last_of('/' + dividesPos);

            if (difference > 0)
            {
                value = std::any_cast<double>(operand.back());
                operand.pop_back();
                operand.back() = std::any_cast<double>(operand.back()) * value;

                totalTimes--;
                timesPos++;
            }
            else {
                value = std::any_cast<double>(operand.back());
                operand.pop_back();
                operand.back() = std::any_cast<double>(operand.back()) / value;

                totalDivides--;
                dividesPos++;
            }
        }

        while (totalTimes)
        {
            value = std::any_cast<double>(operand.back());
            operand.pop_back();
            operand.back() = std::any_cast<double>(operand.back()) * value;

            totalTimes--;
        }

        while (totalDivides)
        {
            value = std::any_cast<double>(operand.back());
            operand.pop_back();
            operand.back() = std::any_cast<double>(operand.back()) / value;

            totalDivides--;
        }
    }

    return operand;
}

std::vector<std::any> BasicVisitorImpl::expoMathAction(std::vector<BasicParser::ExponentExpressionContext*> expoExpr)
{
    std::vector<std::any> operand;
    double value = 0;

    for (BasicParser::ExponentExpressionContext* action : expoExpr)
    {
        operand.push_back(signMathAction(action->signExpression()));

        if(operand.size() > 1)
        {
            for (auto i = 0; i < action->EXPONENT().size(); i++)
            {
                value = std::any_cast<double>(operand.back());
                operand.pop_back();
                operand.back() = pow(std::any_cast<double>(operand.back()), value); // Exponentiation.
            }
        }
    }

    return operand;
}

std::any BasicVisitorImpl::signMathAction(std::vector<BasicParser::SignExpressionContext*> signExpr)
{
    for (BasicParser::SignExpressionContext* action : signExpr)
    {

        if (action->func_())
        {
            double result = std::stod(numToStringCast(funcAction(action->func_())));
            return result;
        }
    }

    return 0.0;
}
