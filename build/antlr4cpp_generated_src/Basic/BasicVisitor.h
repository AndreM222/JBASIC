
// Generated from Basic.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "BasicParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by BasicParser.
 */
class  BasicVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BasicParser.
   */
    virtual std::any visitProg(BasicParser::ProgContext *context) = 0;

    virtual std::any visitLine(BasicParser::LineContext *context) = 0;

    virtual std::any visitAmperoper(BasicParser::AmperoperContext *context) = 0;

    virtual std::any visitLinenumber(BasicParser::LinenumberContext *context) = 0;

    virtual std::any visitAmprstmt(BasicParser::AmprstmtContext *context) = 0;

    virtual std::any visitStatement(BasicParser::StatementContext *context) = 0;

    virtual std::any visitVardecl(BasicParser::VardeclContext *context) = 0;

    virtual std::any visitPrintstmt1(BasicParser::Printstmt1Context *context) = 0;

    virtual std::any visitPrintlist(BasicParser::PrintlistContext *context) = 0;

    virtual std::any visitGetstmt(BasicParser::GetstmtContext *context) = 0;

    virtual std::any visitLetstmt(BasicParser::LetstmtContext *context) = 0;

    virtual std::any visitVariableassignment(BasicParser::VariableassignmentContext *context) = 0;

    virtual std::any visitRelop(BasicParser::RelopContext *context) = 0;

    virtual std::any visitNeq(BasicParser::NeqContext *context) = 0;

    virtual std::any visitIfstmt(BasicParser::IfstmtContext *context) = 0;

    virtual std::any visitForstmt1(BasicParser::Forstmt1Context *context) = 0;

    virtual std::any visitForstmt2(BasicParser::Forstmt2Context *context) = 0;

    virtual std::any visitNextstmt(BasicParser::NextstmtContext *context) = 0;

    virtual std::any visitInputstmt(BasicParser::InputstmtContext *context) = 0;

    virtual std::any visitReadstmt(BasicParser::ReadstmtContext *context) = 0;

    virtual std::any visitDimstmt(BasicParser::DimstmtContext *context) = 0;

    virtual std::any visitGotostmt(BasicParser::GotostmtContext *context) = 0;

    virtual std::any visitGosubstmt(BasicParser::GosubstmtContext *context) = 0;

    virtual std::any visitPokestmt(BasicParser::PokestmtContext *context) = 0;

    virtual std::any visitCallstmt(BasicParser::CallstmtContext *context) = 0;

    virtual std::any visitHplotstmt(BasicParser::HplotstmtContext *context) = 0;

    virtual std::any visitVplotstmt(BasicParser::VplotstmtContext *context) = 0;

    virtual std::any visitPlotstmt(BasicParser::PlotstmtContext *context) = 0;

    virtual std::any visitOngotostmt(BasicParser::OngotostmtContext *context) = 0;

    virtual std::any visitOngosubstmt(BasicParser::OngosubstmtContext *context) = 0;

    virtual std::any visitVtabstmnt(BasicParser::VtabstmntContext *context) = 0;

    virtual std::any visitHtabstmnt(BasicParser::HtabstmntContext *context) = 0;

    virtual std::any visitHimemstmt(BasicParser::HimemstmtContext *context) = 0;

    virtual std::any visitLomemstmt(BasicParser::LomemstmtContext *context) = 0;

    virtual std::any visitDatastmt(BasicParser::DatastmtContext *context) = 0;

    virtual std::any visitDatum(BasicParser::DatumContext *context) = 0;

    virtual std::any visitWaitstmt(BasicParser::WaitstmtContext *context) = 0;

    virtual std::any visitXdrawstmt(BasicParser::XdrawstmtContext *context) = 0;

    virtual std::any visitDrawstmt(BasicParser::DrawstmtContext *context) = 0;

    virtual std::any visitDefstmt(BasicParser::DefstmtContext *context) = 0;

    virtual std::any visitTabstmt(BasicParser::TabstmtContext *context) = 0;

    virtual std::any visitSpeedstmt(BasicParser::SpeedstmtContext *context) = 0;

    virtual std::any visitRotstmt(BasicParser::RotstmtContext *context) = 0;

    virtual std::any visitScalestmt(BasicParser::ScalestmtContext *context) = 0;

    virtual std::any visitColorstmt(BasicParser::ColorstmtContext *context) = 0;

    virtual std::any visitHcolorstmt(BasicParser::HcolorstmtContext *context) = 0;

    virtual std::any visitHlinstmt(BasicParser::HlinstmtContext *context) = 0;

    virtual std::any visitVlinstmt(BasicParser::VlinstmtContext *context) = 0;

    virtual std::any visitOnerrstmt(BasicParser::OnerrstmtContext *context) = 0;

    virtual std::any visitPrstmt(BasicParser::PrstmtContext *context) = 0;

    virtual std::any visitInstmt(BasicParser::InstmtContext *context) = 0;

    virtual std::any visitStorestmt(BasicParser::StorestmtContext *context) = 0;

    virtual std::any visitRecallstmt(BasicParser::RecallstmtContext *context) = 0;

    virtual std::any visitListstmt(BasicParser::ListstmtContext *context) = 0;

    virtual std::any visitPopstmt(BasicParser::PopstmtContext *context) = 0;

    virtual std::any visitAmptstmt(BasicParser::AmptstmtContext *context) = 0;

    virtual std::any visitIncludestmt(BasicParser::IncludestmtContext *context) = 0;

    virtual std::any visitEndstmt(BasicParser::EndstmtContext *context) = 0;

    virtual std::any visitReturnstmt(BasicParser::ReturnstmtContext *context) = 0;

    virtual std::any visitRestorestmt(BasicParser::RestorestmtContext *context) = 0;

    virtual std::any visitNumber(BasicParser::NumberContext *context) = 0;

    virtual std::any visitFunc_(BasicParser::Func_Context *context) = 0;

    virtual std::any visitSignExpression(BasicParser::SignExpressionContext *context) = 0;

    virtual std::any visitExponentExpression(BasicParser::ExponentExpressionContext *context) = 0;

    virtual std::any visitMultiplyingExpression(BasicParser::MultiplyingExpressionContext *context) = 0;

    virtual std::any visitAddingExpression(BasicParser::AddingExpressionContext *context) = 0;

    virtual std::any visitRelationalExpression(BasicParser::RelationalExpressionContext *context) = 0;

    virtual std::any visitExpression(BasicParser::ExpressionContext *context) = 0;

    virtual std::any visitVar_(BasicParser::Var_Context *context) = 0;

    virtual std::any visitVarname(BasicParser::VarnameContext *context) = 0;

    virtual std::any visitVarsuffix(BasicParser::VarsuffixContext *context) = 0;

    virtual std::any visitVarlist(BasicParser::VarlistContext *context) = 0;

    virtual std::any visitExprlist(BasicParser::ExprlistContext *context) = 0;

    virtual std::any visitSqrfunc(BasicParser::SqrfuncContext *context) = 0;

    virtual std::any visitChrfunc(BasicParser::ChrfuncContext *context) = 0;

    virtual std::any visitLenfunc(BasicParser::LenfuncContext *context) = 0;

    virtual std::any visitAscfunc(BasicParser::AscfuncContext *context) = 0;

    virtual std::any visitMidfunc(BasicParser::MidfuncContext *context) = 0;

    virtual std::any visitPdlfunc(BasicParser::PdlfuncContext *context) = 0;

    virtual std::any visitPeekfunc(BasicParser::PeekfuncContext *context) = 0;

    virtual std::any visitIntfunc(BasicParser::IntfuncContext *context) = 0;

    virtual std::any visitSpcfunc(BasicParser::SpcfuncContext *context) = 0;

    virtual std::any visitFrefunc(BasicParser::FrefuncContext *context) = 0;

    virtual std::any visitPosfunc(BasicParser::PosfuncContext *context) = 0;

    virtual std::any visitUsrfunc(BasicParser::UsrfuncContext *context) = 0;

    virtual std::any visitLeftfunc(BasicParser::LeftfuncContext *context) = 0;

    virtual std::any visitRightfunc(BasicParser::RightfuncContext *context) = 0;

    virtual std::any visitStrfunc(BasicParser::StrfuncContext *context) = 0;

    virtual std::any visitFnfunc(BasicParser::FnfuncContext *context) = 0;

    virtual std::any visitValfunc(BasicParser::ValfuncContext *context) = 0;

    virtual std::any visitScrnfunc(BasicParser::ScrnfuncContext *context) = 0;

    virtual std::any visitSinfunc(BasicParser::SinfuncContext *context) = 0;

    virtual std::any visitCosfunc(BasicParser::CosfuncContext *context) = 0;

    virtual std::any visitTanfunc(BasicParser::TanfuncContext *context) = 0;

    virtual std::any visitAtnfunc(BasicParser::AtnfuncContext *context) = 0;

    virtual std::any visitRndfunc(BasicParser::RndfuncContext *context) = 0;

    virtual std::any visitSgnfunc(BasicParser::SgnfuncContext *context) = 0;

    virtual std::any visitExpfunc(BasicParser::ExpfuncContext *context) = 0;

    virtual std::any visitLogfunc(BasicParser::LogfuncContext *context) = 0;

    virtual std::any visitAbsfunc(BasicParser::AbsfuncContext *context) = 0;

    virtual std::any visitTabfunc(BasicParser::TabfuncContext *context) = 0;


};

