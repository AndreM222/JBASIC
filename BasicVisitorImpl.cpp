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
                std::string msg = stringCast(expAction(action), &varValues);

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
        return numberCast(funcType, &varValues);
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
    for(BasicParser::RelationalExpressionContext* currExp : expr)
    {
        std::string symbol;

        for(BasicParser::AddingExpressionContext* action : currExp->addingExpression())
        {
            if(!action->PLUS().empty()) {
                symbol = symbolAction(action->PLUS());
                if(!action->multiplyingExpression().empty()) symbol = multMathAction(action->multiplyingExpression());
            } else if(!action->MINUS().empty()){
                symbol = symbolAction(action->MINUS());
                if(!action->multiplyingExpression().empty()) symbol = multMathAction(action->multiplyingExpression());
            } else if(!action->multiplyingExpression().empty()) symbol = multMathAction(action->multiplyingExpression());
        }
    }

    std::cout << std::endl;

    return {};
}

std::string BasicVisitorImpl::symbolAction(std::vector<antlr4::tree::TerminalNode*> addExpr)
{
    std::string symbol;
    for (auto action : addExpr) {
        std::cout << action->getSymbol()->getText();
        symbol = action->getSymbol()->getText();
    }

    return symbol;
}

std::string BasicVisitorImpl::multMathAction(std::vector<BasicParser::MultiplyingExpressionContext*> mulExpr)
{
    std::string symbol;

    for(BasicParser::MultiplyingExpressionContext *action : mulExpr)
    {
        if(!action->TIMES().empty()){
            symbol =  symbolAction(action->TIMES());
            if(!action->exponentExpression().empty()) symbol = expoMathAction(action->exponentExpression());
        } else if(!action->DIV().empty()){
            symbol = symbolAction(action->DIV());
            if(!action->exponentExpression().empty()) symbol = expoMathAction(action->exponentExpression());
        } else if(!action->exponentExpression().empty()) symbol = expoMathAction(action->exponentExpression());
    }

    return symbol;
}

std::string BasicVisitorImpl::expoMathAction(std::vector<BasicParser::ExponentExpressionContext*> expoExpr)
{
    std::string symbol;

    for(BasicParser::ExponentExpressionContext *action : expoExpr)
    {
        if(!action->EXPONENT().empty()) symbol = symbolAction(action->EXPONENT());
        else if(!action->signExpression().empty()) symbol = signMathAction(action->signExpression());
    }

    return symbol;
}

std::string BasicVisitorImpl::signMathAction(std::vector<BasicParser::SignExpressionContext*> expoExpr)
{
    std::string symbol;

    for(BasicParser::SignExpressionContext *action : expoExpr)
    {
        if(action->func_()) std::cout << stringCast(funcAction(action->func_()), &varValues);
    }

    return "";
}
