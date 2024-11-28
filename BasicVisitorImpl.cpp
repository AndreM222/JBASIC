#include "BasicVisitorImpl.h"
#include <any>
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
        return relationsAction(expr);
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

    if(funcType->LPAREN())
    {
        return expAction(funcType->expression());
    }

    return {};
}

std::any BasicVisitorImpl::relationsAction(BasicParser::ExpressionContext *expr)
{
    std::string val1 = "", val2 = "";
    std::vector<std::any> operand;

    int totalAnd = expr->AND().size();
    int totalOr = expr->OR().size();

    std::string currGroup = expr->getText();

    for (BasicParser::RelationalExpressionContext* currExp : expr->relationalExpression())
    {

        if(currExp->relop())
        {
            operand.push_back(relopAction(currExp));
        }

        if(!currExp->addingExpression().empty())
        {
            std::vector<std::any> tmpVals = addMathAction(currExp->addingExpression());
            operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());
        }
    }

    while(totalAnd && totalOr)
    {
        int leftSymbol = currGroup.find( expr->AND(totalAnd - 1)->getText(), totalAnd);
        auto rightSymbol = currGroup.find(expr->OR(totalOr - 1)->getText(), totalOr);
        int difference = leftSymbol - rightSymbol;

        if(difference > 0)
        {
            val1 = numToStringCast(operand.back());
            operand.pop_back();
            val2 = std::any_cast<std::string>(operand.back());

            if ((!val2.empty() && val2 != "0") && (!val1.empty() && val1 != "0"))
                operand.back() = 1;
            else
                operand.back() = 0;

            totalAnd--;
        }
        else {
            val1 = numToStringCast(operand.back());
            operand.pop_back();
            val2 = numToStringCast(operand.back());

            if ((!val2.empty() && val2 != "0") || (!val1.empty() && val1 != "0"))
                operand.back() = 1;
            else
                operand.back() = 0;

            totalOr--;
        }
    }

    while(totalOr)
    {
        val1 = numToStringCast(operand.back());
        operand.pop_back();
        val2 = numToStringCast(operand.back());

        if ((!val2.empty() && val2 != "0") || (!val1.empty() && val1 != "0"))
            operand.back() = 1;
        else
            operand.back() = 0;

        totalOr--;
    }

    while(totalAnd)
    {
        val1 = numToStringCast(operand.back());
        operand.pop_back();
        val2 = numToStringCast(operand.back());

        if ((!val2.empty() && val2 != "0") && (!val1.empty() && val1 != "0"))
            operand.back() = 1;
        else
            operand.back() = 0;

        totalAnd--;
    }

    return operand.front();
}

int BasicVisitorImpl::relopAction(BasicParser::RelationalExpressionContext* currExp)
{
    std::vector<std::any> operand;

    if(currExp->relop()->EQ())
    {
        std::vector<std::any> tmpVals = addMathAction(currExp->addingExpression());
        operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());

        std::string value1 = numToStringCast(operand[0]);
        std::string value2 = numToStringCast(operand[1]);

        if (operand[0].type() == operand[0].type() && value1 == value2)
            return 1;
        else
            return 0;
    }

    if(currExp->relop()->neq())
    {
        std::vector<std::any> tmpVals = addMathAction(currExp->addingExpression());
        operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());

        std::string value1 = numToStringCast(operand[0]);
        std::string value2 = numToStringCast(operand[1]);

        if (operand[0].type() != operand[0].type() || value1 != value2)
            return 1;
        else
            return 0;
    }

    if(currExp->relop()->GT())
    {
        std::vector<std::any> tmpVals = addMathAction(currExp->addingExpression());
        operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());

        double value1 = std::stoi(numToStringCast(operand[0]));
        double value2 = std::stoi(numToStringCast(operand[1]));

        if (value1 > value2)
            return 1;
        else
            return 0;
    }

    if(currExp->relop()->GTE())
    {
        std::vector<std::any> tmpVals = addMathAction(currExp->addingExpression());
        operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());

        double value1 = std::stoi(numToStringCast(operand[0]));
        double value2 = std::stoi(numToStringCast(operand[1]));

        if (value1 >= value2)
            return 1;
        else
            return 0;
    }

    if(currExp->relop()->LT())
    {
        std::vector<std::any> tmpVals = addMathAction(currExp->addingExpression());
        operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());

        double value1 = std::stoi(numToStringCast(operand[0]));
        double value2 = std::stoi(numToStringCast(operand[1]));

        if (value1 < value2)
            return 1;
        else
            return 0;
    }

    if(currExp->relop()->LTE())
    {
        std::vector<std::any> tmpVals = addMathAction(currExp->addingExpression());
        operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());

        double value1 = std::stoi(numToStringCast(operand[0]));
        double value2 = std::stoi(numToStringCast(operand[1]));

        if (value1 <= value2)
            return 1;
        else
            return 0;
    }

    return 0;
}

std::vector<std::any> BasicVisitorImpl::addMathAction(std::vector<BasicParser::AddingExpressionContext*> currExp)
{
    std::any value;
    std::vector<std::any> operand;

    for (BasicParser::AddingExpressionContext* action : currExp)
    {
        std::vector<std::any> tmpVals = multMathAction(action->multiplyingExpression());
        operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());

        int totalMinus = action->MINUS().size();
        int totalPlus = action->PLUS().size();

        std::string currGroup = action->getText();

        while(totalMinus && totalPlus)
        {
            int leftSymbol = currGroup.find(action->PLUS(totalPlus - 1)->getSymbol()->getText(), totalPlus);
            int rightSymbol = currGroup.find(action->MINUS(totalMinus - 1)->getText(), totalMinus);

            int difference = leftSymbol - rightSymbol;

            if(difference > 0)
            {
                value = operand.back();
                operand.pop_back();
                if (value.type() == typeid(std::string) || operand.back().type() == typeid(std::string))
                {
                    operand.back() = numToStringCast(operand.back()).append(numToStringCast(value));
                }
                else {
                    operand.back() = numToNumCast(std::stod(numToStringCast(operand.back())) + std::stod(numToStringCast(value)));
                }

                totalPlus--;
            }
            else {
                value = operand.back();
                operand.pop_back();
                if (value.type() == typeid(std::string) || operand.back().type() == typeid(std::string))
                {
                    int start =  numToStringCast(operand.back()).find(numToStringCast(value));
                    int end =  numToStringCast(value).size();
                    operand.back() = numToStringCast(operand.back()).erase(start, end);
                }
                else {
                    operand.back() = numToNumCast(std::stod(numToStringCast(operand.back())) - std::stod(numToStringCast(value)));
                }

                totalMinus--;
            }
        }

        while(totalPlus)
        {
            value = operand.back();
            operand.pop_back();
            if (value.type() == typeid(std::string) || operand.back().type() == typeid(std::string))
            {
                operand.back() = numToStringCast(operand.back()).append(numToStringCast(value));
            }
            else {
                operand.back() = numToNumCast(std::stod(numToStringCast(operand.back())) + std::stod(numToStringCast(value)));
            }

            totalPlus--;
        }

        while(totalMinus)
        {
            value = operand.back();
            operand.pop_back();
            if (value.type() == typeid(std::string) || operand.back().type() == typeid(std::string))
            {
                int start =  numToStringCast(operand.back()).find(numToStringCast(value));
                int end =  numToStringCast(value).size();
                operand.back() = numToStringCast(operand.back()).erase(start, end);
            }
            else {
                operand.back() = numToNumCast(std::stod(numToStringCast(operand.back())) - std::stod(numToStringCast(value)));
            }

            totalMinus--;
        }
    }

    return operand;
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

        std::string currGroup = action->getText();

        while (totalTimes && totalDivides)
        {
            int leftSymbol = currGroup.find(action->TIMES(totalTimes - 1)->getSymbol()->getText(), totalTimes);
            int rightSymbol = currGroup.find(action->DIV(totalDivides - 1)->getText(), totalDivides);

            int difference = leftSymbol - rightSymbol;

            if (difference > 0)
            {
                value = std::stod(numToStringCast(operand.back()));
                operand.pop_back();
                operand.back() = numToNumCast(std::stod(numToStringCast(operand.back())) * value);

                totalTimes--;
            }
            else {
                value = std::stod(numToStringCast(operand.back()));
                operand.pop_back();
                operand.back() = numToNumCast(std::stod(numToStringCast(operand.back())) / value);

                totalDivides--;
            }
        }

        while (totalTimes)
        {
            value = std::stod(numToStringCast(operand.back()));
            operand.pop_back();
            operand.back() = numToNumCast(std::stod(numToStringCast(operand.back())) * value);

            totalTimes--;
        }

        while (totalDivides)
        {
            value = std::stod(numToStringCast(operand.back()));
            operand.pop_back();
            operand.back() = numToNumCast(std::stod(numToStringCast(operand.back())) / value);

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
        std::vector<std::any> tmpVals = signMathAction(action->signExpression());
        operand.insert(operand.end(), tmpVals.begin(), tmpVals.end());

        for (auto i = 0; i < action->EXPONENT().size(); i++)
        {
            value = std::stod(numToStringCast(operand.back()));
            operand.pop_back();
            operand.back() = numToNumCast(pow(std::stod(numToStringCast(operand.back())), value)); // Exponentiation.
        }
    }

    return operand;
}

std::vector<std::any> BasicVisitorImpl::signMathAction(std::vector<BasicParser::SignExpressionContext*> signExpr)
{
    std::vector<std::any> operand;

    for (BasicParser::SignExpressionContext* action : signExpr)
    {
        if (action->func_())
        {
            operand.push_back(funcAction(action->func_()));
        }
    }

    return operand;
}
