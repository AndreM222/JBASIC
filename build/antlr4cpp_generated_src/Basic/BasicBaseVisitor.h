
// Generated from Basic.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "BasicVisitor.h"


/**
 * This class provides an empty implementation of BasicVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  BasicBaseVisitor : public BasicVisitor {
public:

  virtual std::any visitProg(BasicParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine(BasicParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAmperoper(BasicParser::AmperoperContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLinenumber(BasicParser::LinenumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAmprstmt(BasicParser::AmprstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(BasicParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVardecl(BasicParser::VardeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintstmt1(BasicParser::Printstmt1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintlist(BasicParser::PrintlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetstmt(BasicParser::GetstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLetstmt(BasicParser::LetstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableassignment(BasicParser::VariableassignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelop(BasicParser::RelopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNeq(BasicParser::NeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfstmt(BasicParser::IfstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForstmt1(BasicParser::Forstmt1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForstmt2(BasicParser::Forstmt2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNextstmt(BasicParser::NextstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInputstmt(BasicParser::InputstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReadstmt(BasicParser::ReadstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDimstmt(BasicParser::DimstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGotostmt(BasicParser::GotostmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGosubstmt(BasicParser::GosubstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPokestmt(BasicParser::PokestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallstmt(BasicParser::CallstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHplotstmt(BasicParser::HplotstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVplotstmt(BasicParser::VplotstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlotstmt(BasicParser::PlotstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOngotostmt(BasicParser::OngotostmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOngosubstmt(BasicParser::OngosubstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVtabstmnt(BasicParser::VtabstmntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHtabstmnt(BasicParser::HtabstmntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHimemstmt(BasicParser::HimemstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLomemstmt(BasicParser::LomemstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatastmt(BasicParser::DatastmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatum(BasicParser::DatumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWaitstmt(BasicParser::WaitstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXdrawstmt(BasicParser::XdrawstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrawstmt(BasicParser::DrawstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefstmt(BasicParser::DefstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTabstmt(BasicParser::TabstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpeedstmt(BasicParser::SpeedstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRotstmt(BasicParser::RotstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScalestmt(BasicParser::ScalestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColorstmt(BasicParser::ColorstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHcolorstmt(BasicParser::HcolorstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHlinstmt(BasicParser::HlinstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVlinstmt(BasicParser::VlinstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnerrstmt(BasicParser::OnerrstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrstmt(BasicParser::PrstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstmt(BasicParser::InstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStorestmt(BasicParser::StorestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecallstmt(BasicParser::RecallstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitListstmt(BasicParser::ListstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPopstmt(BasicParser::PopstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAmptstmt(BasicParser::AmptstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncludestmt(BasicParser::IncludestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndstmt(BasicParser::EndstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnstmt(BasicParser::ReturnstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRestorestmt(BasicParser::RestorestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(BasicParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_(BasicParser::Func_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSignExpression(BasicParser::SignExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExponentExpression(BasicParser::ExponentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplyingExpression(BasicParser::MultiplyingExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddingExpression(BasicParser::AddingExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpression(BasicParser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(BasicParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_(BasicParser::Var_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarname(BasicParser::VarnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarsuffix(BasicParser::VarsuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarlist(BasicParser::VarlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprlist(BasicParser::ExprlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSqrfunc(BasicParser::SqrfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChrfunc(BasicParser::ChrfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLenfunc(BasicParser::LenfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAscfunc(BasicParser::AscfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMidfunc(BasicParser::MidfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPdlfunc(BasicParser::PdlfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeekfunc(BasicParser::PeekfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntfunc(BasicParser::IntfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpcfunc(BasicParser::SpcfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrefunc(BasicParser::FrefuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPosfunc(BasicParser::PosfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsrfunc(BasicParser::UsrfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeftfunc(BasicParser::LeftfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRightfunc(BasicParser::RightfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStrfunc(BasicParser::StrfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFnfunc(BasicParser::FnfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValfunc(BasicParser::ValfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScrnfunc(BasicParser::ScrnfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSinfunc(BasicParser::SinfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCosfunc(BasicParser::CosfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTanfunc(BasicParser::TanfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtnfunc(BasicParser::AtnfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRndfunc(BasicParser::RndfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSgnfunc(BasicParser::SgnfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpfunc(BasicParser::ExpfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogfunc(BasicParser::LogfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbsfunc(BasicParser::AbsfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTabfunc(BasicParser::TabfuncContext *ctx) override {
    return visitChildren(ctx);
  }


};

