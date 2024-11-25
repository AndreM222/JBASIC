
// Generated from Basic.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  BasicParser : public antlr4::Parser {
public:
  enum {
    DOLLAR = 1, PERCENT = 2, RETURN = 3, PRINT = 4, GOTO = 5, GOSUB = 6, 
    IF = 7, NEXT = 8, THEN = 9, REM = 10, CHR = 11, MID = 12, LEFT = 13, 
    RIGHT = 14, STR = 15, LPAREN = 16, RPAREN = 17, PLUS = 18, MINUS = 19, 
    TIMES = 20, DIV = 21, CLEAR = 22, GTE = 23, LTE = 24, GT = 25, LT = 26, 
    COMMA = 27, LIST = 28, RUN = 29, END = 30, LET = 31, EQ = 32, FOR = 33, 
    TO = 34, STEP = 35, INPUT = 36, SEMICOLON = 37, DIM = 38, SQR = 39, 
    COLON = 40, TEXT = 41, HGR = 42, HGR2 = 43, LEN = 44, CALL = 45, ASC = 46, 
    HPLOT = 47, VPLOT = 48, PRNUMBER = 49, INNUMBER = 50, VTAB = 51, HTAB = 52, 
    HOME = 53, ON = 54, PDL = 55, PLOT = 56, PEEK = 57, POKE = 58, INTF = 59, 
    STOP = 60, HIMEM = 61, LOMEM = 62, FLASH = 63, INVERSE = 64, NORMAL = 65, 
    ONERR = 66, SPC = 67, FRE = 68, POS = 69, USR = 70, TRACE = 71, NOTRACE = 72, 
    AND = 73, OR = 74, DATA = 75, WAIT = 76, READ = 77, XDRAW = 78, DRAW = 79, 
    AT = 80, DEF = 81, FN = 82, VAL = 83, TAB = 84, SPEED = 85, ROT = 86, 
    SCALE = 87, COLOR = 88, HCOLOR = 89, HLIN = 90, VLIN = 91, SCRN = 92, 
    POP = 93, SHLOAD = 94, SIN = 95, COS = 96, TAN = 97, ATN = 98, RND = 99, 
    SGN = 100, EXP = 101, LOG = 102, ABS = 103, STORE = 104, RECALL = 105, 
    GET = 106, EXPONENT = 107, AMPERSAND = 108, GR = 109, NOT = 110, RESTORE = 111, 
    SAVE = 112, LOAD = 113, QUESTION = 114, INCLUDE = 115, CLS = 116, COMMENT = 117, 
    STRINGLITERAL = 118, LETTERS = 119, NUMBER = 120, FLOAT = 121, WS = 122
  };

  enum {
    RuleProg = 0, RuleLine = 1, RuleAmperoper = 2, RuleLinenumber = 3, RuleAmprstmt = 4, 
    RuleStatement = 5, RuleVardecl = 6, RulePrintstmt1 = 7, RulePrintlist = 8, 
    RuleGetstmt = 9, RuleLetstmt = 10, RuleVariableassignment = 11, RuleRelop = 12, 
    RuleNeq = 13, RuleIfstmt = 14, RuleForstmt1 = 15, RuleForstmt2 = 16, 
    RuleNextstmt = 17, RuleInputstmt = 18, RuleReadstmt = 19, RuleDimstmt = 20, 
    RuleGotostmt = 21, RuleGosubstmt = 22, RulePokestmt = 23, RuleCallstmt = 24, 
    RuleHplotstmt = 25, RuleVplotstmt = 26, RulePlotstmt = 27, RuleOngotostmt = 28, 
    RuleOngosubstmt = 29, RuleVtabstmnt = 30, RuleHtabstmnt = 31, RuleHimemstmt = 32, 
    RuleLomemstmt = 33, RuleDatastmt = 34, RuleDatum = 35, RuleWaitstmt = 36, 
    RuleXdrawstmt = 37, RuleDrawstmt = 38, RuleDefstmt = 39, RuleTabstmt = 40, 
    RuleSpeedstmt = 41, RuleRotstmt = 42, RuleScalestmt = 43, RuleColorstmt = 44, 
    RuleHcolorstmt = 45, RuleHlinstmt = 46, RuleVlinstmt = 47, RuleOnerrstmt = 48, 
    RulePrstmt = 49, RuleInstmt = 50, RuleStorestmt = 51, RuleRecallstmt = 52, 
    RuleListstmt = 53, RulePopstmt = 54, RuleAmptstmt = 55, RuleIncludestmt = 56, 
    RuleEndstmt = 57, RuleReturnstmt = 58, RuleRestorestmt = 59, RuleNumber = 60, 
    RuleFunc_ = 61, RuleSignExpression = 62, RuleExponentExpression = 63, 
    RuleMultiplyingExpression = 64, RuleAddingExpression = 65, RuleRelationalExpression = 66, 
    RuleExpression = 67, RuleVar_ = 68, RuleVarname = 69, RuleVarsuffix = 70, 
    RuleVarlist = 71, RuleExprlist = 72, RuleSqrfunc = 73, RuleChrfunc = 74, 
    RuleLenfunc = 75, RuleAscfunc = 76, RuleMidfunc = 77, RulePdlfunc = 78, 
    RulePeekfunc = 79, RuleIntfunc = 80, RuleSpcfunc = 81, RuleFrefunc = 82, 
    RulePosfunc = 83, RuleUsrfunc = 84, RuleLeftfunc = 85, RuleRightfunc = 86, 
    RuleStrfunc = 87, RuleFnfunc = 88, RuleValfunc = 89, RuleScrnfunc = 90, 
    RuleSinfunc = 91, RuleCosfunc = 92, RuleTanfunc = 93, RuleAtnfunc = 94, 
    RuleRndfunc = 95, RuleSgnfunc = 96, RuleExpfunc = 97, RuleLogfunc = 98, 
    RuleAbsfunc = 99, RuleTabfunc = 100
  };

  explicit BasicParser(antlr4::TokenStream *input);

  BasicParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~BasicParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class LineContext;
  class AmperoperContext;
  class LinenumberContext;
  class AmprstmtContext;
  class StatementContext;
  class VardeclContext;
  class Printstmt1Context;
  class PrintlistContext;
  class GetstmtContext;
  class LetstmtContext;
  class VariableassignmentContext;
  class RelopContext;
  class NeqContext;
  class IfstmtContext;
  class Forstmt1Context;
  class Forstmt2Context;
  class NextstmtContext;
  class InputstmtContext;
  class ReadstmtContext;
  class DimstmtContext;
  class GotostmtContext;
  class GosubstmtContext;
  class PokestmtContext;
  class CallstmtContext;
  class HplotstmtContext;
  class VplotstmtContext;
  class PlotstmtContext;
  class OngotostmtContext;
  class OngosubstmtContext;
  class VtabstmntContext;
  class HtabstmntContext;
  class HimemstmtContext;
  class LomemstmtContext;
  class DatastmtContext;
  class DatumContext;
  class WaitstmtContext;
  class XdrawstmtContext;
  class DrawstmtContext;
  class DefstmtContext;
  class TabstmtContext;
  class SpeedstmtContext;
  class RotstmtContext;
  class ScalestmtContext;
  class ColorstmtContext;
  class HcolorstmtContext;
  class HlinstmtContext;
  class VlinstmtContext;
  class OnerrstmtContext;
  class PrstmtContext;
  class InstmtContext;
  class StorestmtContext;
  class RecallstmtContext;
  class ListstmtContext;
  class PopstmtContext;
  class AmptstmtContext;
  class IncludestmtContext;
  class EndstmtContext;
  class ReturnstmtContext;
  class RestorestmtContext;
  class NumberContext;
  class Func_Context;
  class SignExpressionContext;
  class ExponentExpressionContext;
  class MultiplyingExpressionContext;
  class AddingExpressionContext;
  class RelationalExpressionContext;
  class ExpressionContext;
  class Var_Context;
  class VarnameContext;
  class VarsuffixContext;
  class VarlistContext;
  class ExprlistContext;
  class SqrfuncContext;
  class ChrfuncContext;
  class LenfuncContext;
  class AscfuncContext;
  class MidfuncContext;
  class PdlfuncContext;
  class PeekfuncContext;
  class IntfuncContext;
  class SpcfuncContext;
  class FrefuncContext;
  class PosfuncContext;
  class UsrfuncContext;
  class LeftfuncContext;
  class RightfuncContext;
  class StrfuncContext;
  class FnfuncContext;
  class ValfuncContext;
  class ScrnfuncContext;
  class SinfuncContext;
  class CosfuncContext;
  class TanfuncContext;
  class AtnfuncContext;
  class RndfuncContext;
  class SgnfuncContext;
  class ExpfuncContext;
  class LogfuncContext;
  class AbsfuncContext;
  class TabfuncContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<LineContext *> line();
    LineContext* line(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LinenumberContext *linenumber();
    std::vector<AmprstmtContext *> amprstmt();
    AmprstmtContext* amprstmt(size_t i);
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *REM();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

  class  AmperoperContext : public antlr4::ParserRuleContext {
  public:
    AmperoperContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AMPERSAND();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AmperoperContext* amperoper();

  class  LinenumberContext : public antlr4::ParserRuleContext {
  public:
    LinenumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LinenumberContext* linenumber();

  class  AmprstmtContext : public antlr4::ParserRuleContext {
  public:
    AmprstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    AmperoperContext *amperoper();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *REM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AmprstmtContext* amprstmt();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLS();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *SAVE();
    antlr4::tree::TerminalNode *TRACE();
    antlr4::tree::TerminalNode *NOTRACE();
    antlr4::tree::TerminalNode *FLASH();
    antlr4::tree::TerminalNode *INVERSE();
    antlr4::tree::TerminalNode *GR();
    antlr4::tree::TerminalNode *NORMAL();
    antlr4::tree::TerminalNode *SHLOAD();
    antlr4::tree::TerminalNode *CLEAR();
    antlr4::tree::TerminalNode *RUN();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *HOME();
    antlr4::tree::TerminalNode *HGR();
    antlr4::tree::TerminalNode *HGR2();
    EndstmtContext *endstmt();
    ReturnstmtContext *returnstmt();
    RestorestmtContext *restorestmt();
    AmptstmtContext *amptstmt();
    PopstmtContext *popstmt();
    ListstmtContext *liststmt();
    StorestmtContext *storestmt();
    GetstmtContext *getstmt();
    RecallstmtContext *recallstmt();
    NextstmtContext *nextstmt();
    InstmtContext *instmt();
    PrstmtContext *prstmt();
    OnerrstmtContext *onerrstmt();
    HlinstmtContext *hlinstmt();
    VlinstmtContext *vlinstmt();
    ColorstmtContext *colorstmt();
    SpeedstmtContext *speedstmt();
    ScalestmtContext *scalestmt();
    RotstmtContext *rotstmt();
    HcolorstmtContext *hcolorstmt();
    HimemstmtContext *himemstmt();
    LomemstmtContext *lomemstmt();
    Printstmt1Context *printstmt1();
    PokestmtContext *pokestmt();
    PlotstmtContext *plotstmt();
    OngotostmtContext *ongotostmt();
    OngosubstmtContext *ongosubstmt();
    IfstmtContext *ifstmt();
    Forstmt1Context *forstmt1();
    Forstmt2Context *forstmt2();
    InputstmtContext *inputstmt();
    TabstmtContext *tabstmt();
    DimstmtContext *dimstmt();
    GotostmtContext *gotostmt();
    GosubstmtContext *gosubstmt();
    CallstmtContext *callstmt();
    ReadstmtContext *readstmt();
    HplotstmtContext *hplotstmt();
    VplotstmtContext *vplotstmt();
    VtabstmntContext *vtabstmnt();
    HtabstmntContext *htabstmnt();
    WaitstmtContext *waitstmt();
    DatastmtContext *datastmt();
    XdrawstmtContext *xdrawstmt();
    DrawstmtContext *drawstmt();
    DefstmtContext *defstmt();
    LetstmtContext *letstmt();
    IncludestmtContext *includestmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  VardeclContext : public antlr4::ParserRuleContext {
  public:
    VardeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_Context *var_();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<ExprlistContext *> exprlist();
    ExprlistContext* exprlist(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VardeclContext* vardecl();

  class  Printstmt1Context : public antlr4::ParserRuleContext {
  public:
    Printstmt1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *QUESTION();
    PrintlistContext *printlist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Printstmt1Context* printstmt1();

  class  PrintlistContext : public antlr4::ParserRuleContext {
  public:
    PrintlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintlistContext* printlist();

  class  GetstmtContext : public antlr4::ParserRuleContext {
  public:
    GetstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    ExprlistContext *exprlist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetstmtContext* getstmt();

  class  LetstmtContext : public antlr4::ParserRuleContext {
  public:
    LetstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableassignmentContext *variableassignment();
    antlr4::tree::TerminalNode *LET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LetstmtContext* letstmt();

  class  VariableassignmentContext : public antlr4::ParserRuleContext {
  public:
    VariableassignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VardeclContext *vardecl();
    antlr4::tree::TerminalNode *EQ();
    ExprlistContext *exprlist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableassignmentContext* variableassignment();

  class  RelopContext : public antlr4::ParserRuleContext {
  public:
    RelopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GTE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *LT();
    NeqContext *neq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelopContext* relop();

  class  NeqContext : public antlr4::ParserRuleContext {
  public:
    NeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NeqContext* neq();

  class  IfstmtContext : public antlr4::ParserRuleContext {
  public:
    IfstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    StatementContext *statement();
    LinenumberContext *linenumber();
    antlr4::tree::TerminalNode *THEN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfstmtContext* ifstmt();

  class  Forstmt1Context : public antlr4::ParserRuleContext {
  public:
    Forstmt1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    std::vector<VardeclContext *> vardecl();
    VardeclContext* vardecl(size_t i);
    antlr4::tree::TerminalNode *EQ();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *STEP();
    StatementContext *statement();
    antlr4::tree::TerminalNode *NEXT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Forstmt1Context* forstmt1();

  class  Forstmt2Context : public antlr4::ParserRuleContext {
  public:
    Forstmt2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    VardeclContext *vardecl();
    antlr4::tree::TerminalNode *EQ();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *STEP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Forstmt2Context* forstmt2();

  class  NextstmtContext : public antlr4::ParserRuleContext {
  public:
    NextstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEXT();
    std::vector<VardeclContext *> vardecl();
    VardeclContext* vardecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NextstmtContext* nextstmt();

  class  InputstmtContext : public antlr4::ParserRuleContext {
  public:
    InputstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    VarlistContext *varlist();
    antlr4::tree::TerminalNode *STRINGLITERAL();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputstmtContext* inputstmt();

  class  ReadstmtContext : public antlr4::ParserRuleContext {
  public:
    ReadstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    VarlistContext *varlist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReadstmtContext* readstmt();

  class  DimstmtContext : public antlr4::ParserRuleContext {
  public:
    DimstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIM();
    VarlistContext *varlist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DimstmtContext* dimstmt();

  class  GotostmtContext : public antlr4::ParserRuleContext {
  public:
    GotostmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    LinenumberContext *linenumber();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GotostmtContext* gotostmt();

  class  GosubstmtContext : public antlr4::ParserRuleContext {
  public:
    GosubstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOSUB();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GosubstmtContext* gosubstmt();

  class  PokestmtContext : public antlr4::ParserRuleContext {
  public:
    PokestmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POKE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PokestmtContext* pokestmt();

  class  CallstmtContext : public antlr4::ParserRuleContext {
  public:
    CallstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    ExprlistContext *exprlist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallstmtContext* callstmt();

  class  HplotstmtContext : public antlr4::ParserRuleContext {
  public:
    HplotstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HPLOT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HplotstmtContext* hplotstmt();

  class  VplotstmtContext : public antlr4::ParserRuleContext {
  public:
    VplotstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VPLOT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VplotstmtContext* vplotstmt();

  class  PlotstmtContext : public antlr4::ParserRuleContext {
  public:
    PlotstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLOT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlotstmtContext* plotstmt();

  class  OngotostmtContext : public antlr4::ParserRuleContext {
  public:
    OngotostmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *GOTO();
    std::vector<LinenumberContext *> linenumber();
    LinenumberContext* linenumber(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OngotostmtContext* ongotostmt();

  class  OngosubstmtContext : public antlr4::ParserRuleContext {
  public:
    OngosubstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *GOSUB();
    std::vector<LinenumberContext *> linenumber();
    LinenumberContext* linenumber(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OngosubstmtContext* ongosubstmt();

  class  VtabstmntContext : public antlr4::ParserRuleContext {
  public:
    VtabstmntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VTAB();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VtabstmntContext* vtabstmnt();

  class  HtabstmntContext : public antlr4::ParserRuleContext {
  public:
    HtabstmntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HTAB();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HtabstmntContext* htabstmnt();

  class  HimemstmtContext : public antlr4::ParserRuleContext {
  public:
    HimemstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HIMEM();
    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HimemstmtContext* himemstmt();

  class  LomemstmtContext : public antlr4::ParserRuleContext {
  public:
    LomemstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOMEM();
    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LomemstmtContext* lomemstmt();

  class  DatastmtContext : public antlr4::ParserRuleContext {
  public:
    DatastmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    std::vector<DatumContext *> datum();
    DatumContext* datum(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DatastmtContext* datastmt();

  class  DatumContext : public antlr4::ParserRuleContext {
  public:
    DatumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    antlr4::tree::TerminalNode *STRINGLITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DatumContext* datum();

  class  WaitstmtContext : public antlr4::ParserRuleContext {
  public:
    WaitstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WaitstmtContext* waitstmt();

  class  XdrawstmtContext : public antlr4::ParserRuleContext {
  public:
    XdrawstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XDRAW();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XdrawstmtContext* xdrawstmt();

  class  DrawstmtContext : public antlr4::ParserRuleContext {
  public:
    DrawstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DRAW();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DrawstmtContext* drawstmt();

  class  DefstmtContext : public antlr4::ParserRuleContext {
  public:
    DefstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEF();
    std::vector<Var_Context *> var_();
    Var_Context* var_(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *FN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefstmtContext* defstmt();

  class  TabstmtContext : public antlr4::ParserRuleContext {
  public:
    TabstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAB();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TabstmtContext* tabstmt();

  class  SpeedstmtContext : public antlr4::ParserRuleContext {
  public:
    SpeedstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPEED();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpeedstmtContext* speedstmt();

  class  RotstmtContext : public antlr4::ParserRuleContext {
  public:
    RotstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROT();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RotstmtContext* rotstmt();

  class  ScalestmtContext : public antlr4::ParserRuleContext {
  public:
    ScalestmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCALE();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScalestmtContext* scalestmt();

  class  ColorstmtContext : public antlr4::ParserRuleContext {
  public:
    ColorstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLOR();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColorstmtContext* colorstmt();

  class  HcolorstmtContext : public antlr4::ParserRuleContext {
  public:
    HcolorstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HCOLOR();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HcolorstmtContext* hcolorstmt();

  class  HlinstmtContext : public antlr4::ParserRuleContext {
  public:
    HlinstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HLIN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *AT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HlinstmtContext* hlinstmt();

  class  VlinstmtContext : public antlr4::ParserRuleContext {
  public:
    VlinstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VLIN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *AT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VlinstmtContext* vlinstmt();

  class  OnerrstmtContext : public antlr4::ParserRuleContext {
  public:
    OnerrstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ONERR();
    antlr4::tree::TerminalNode *GOTO();
    LinenumberContext *linenumber();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnerrstmtContext* onerrstmt();

  class  PrstmtContext : public antlr4::ParserRuleContext {
  public:
    PrstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRNUMBER();
    antlr4::tree::TerminalNode *NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrstmtContext* prstmt();

  class  InstmtContext : public antlr4::ParserRuleContext {
  public:
    InstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INNUMBER();
    antlr4::tree::TerminalNode *NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstmtContext* instmt();

  class  StorestmtContext : public antlr4::ParserRuleContext {
  public:
    StorestmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STORE();
    VardeclContext *vardecl();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorestmtContext* storestmt();

  class  RecallstmtContext : public antlr4::ParserRuleContext {
  public:
    RecallstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RECALL();
    VardeclContext *vardecl();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecallstmtContext* recallstmt();

  class  ListstmtContext : public antlr4::ParserRuleContext {
  public:
    ListstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIST();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListstmtContext* liststmt();

  class  PopstmtContext : public antlr4::ParserRuleContext {
  public:
    PopstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PopstmtContext* popstmt();

  class  AmptstmtContext : public antlr4::ParserRuleContext {
  public:
    AmptstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AMPERSAND();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AmptstmtContext* amptstmt();

  class  IncludestmtContext : public antlr4::ParserRuleContext {
  public:
    IncludestmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncludestmtContext* includestmt();

  class  EndstmtContext : public antlr4::ParserRuleContext {
  public:
    EndstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndstmtContext* endstmt();

  class  ReturnstmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnstmtContext* returnstmt();

  class  RestorestmtContext : public antlr4::ParserRuleContext {
  public:
    RestorestmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTORE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RestorestmtContext* restorestmt();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  Func_Context : public antlr4::ParserRuleContext {
  public:
    Func_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRINGLITERAL();
    NumberContext *number();
    TabfuncContext *tabfunc();
    VardeclContext *vardecl();
    ChrfuncContext *chrfunc();
    SqrfuncContext *sqrfunc();
    LenfuncContext *lenfunc();
    StrfuncContext *strfunc();
    AscfuncContext *ascfunc();
    ScrnfuncContext *scrnfunc();
    MidfuncContext *midfunc();
    PdlfuncContext *pdlfunc();
    PeekfuncContext *peekfunc();
    IntfuncContext *intfunc();
    SpcfuncContext *spcfunc();
    FrefuncContext *frefunc();
    PosfuncContext *posfunc();
    UsrfuncContext *usrfunc();
    LeftfuncContext *leftfunc();
    ValfuncContext *valfunc();
    RightfuncContext *rightfunc();
    FnfuncContext *fnfunc();
    SinfuncContext *sinfunc();
    CosfuncContext *cosfunc();
    TanfuncContext *tanfunc();
    AtnfuncContext *atnfunc();
    RndfuncContext *rndfunc();
    SgnfuncContext *sgnfunc();
    ExpfuncContext *expfunc();
    LogfuncContext *logfunc();
    AbsfuncContext *absfunc();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_Context* func_();

  class  SignExpressionContext : public antlr4::ParserRuleContext {
  public:
    SignExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_Context *func_();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignExpressionContext* signExpression();

  class  ExponentExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExponentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SignExpressionContext *> signExpression();
    SignExpressionContext* signExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXPONENT();
    antlr4::tree::TerminalNode* EXPONENT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExponentExpressionContext* exponentExpression();

  class  MultiplyingExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplyingExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExponentExpressionContext *> exponentExpression();
    ExponentExpressionContext* exponentExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TIMES();
    antlr4::tree::TerminalNode* TIMES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplyingExpressionContext* multiplyingExpression();

  class  AddingExpressionContext : public antlr4::ParserRuleContext {
  public:
    AddingExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultiplyingExpressionContext *> multiplyingExpression();
    MultiplyingExpressionContext* multiplyingExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddingExpressionContext* addingExpression();

  class  RelationalExpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AddingExpressionContext *> addingExpression();
    AddingExpressionContext* addingExpression(size_t i);
    RelopContext *relop();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalExpressionContext* relationalExpression();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_Context *func_();
    std::vector<RelationalExpressionContext *> relationalExpression();
    RelationalExpressionContext* relationalExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  Var_Context : public antlr4::ParserRuleContext {
  public:
    Var_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarnameContext *varname();
    VarsuffixContext *varsuffix();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_Context* var_();

  class  VarnameContext : public antlr4::ParserRuleContext {
  public:
    VarnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LETTERS();
    antlr4::tree::TerminalNode* LETTERS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarnameContext* varname();

  class  VarsuffixContext : public antlr4::ParserRuleContext {
  public:
    VarsuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *PERCENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarsuffixContext* varsuffix();

  class  VarlistContext : public antlr4::ParserRuleContext {
  public:
    VarlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VardeclContext *> vardecl();
    VardeclContext* vardecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarlistContext* varlist();

  class  ExprlistContext : public antlr4::ParserRuleContext {
  public:
    ExprlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprlistContext* exprlist();

  class  SqrfuncContext : public antlr4::ParserRuleContext {
  public:
    SqrfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQR();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SqrfuncContext* sqrfunc();

  class  ChrfuncContext : public antlr4::ParserRuleContext {
  public:
    ChrfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHR();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChrfuncContext* chrfunc();

  class  LenfuncContext : public antlr4::ParserRuleContext {
  public:
    LenfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEN();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LenfuncContext* lenfunc();

  class  AscfuncContext : public antlr4::ParserRuleContext {
  public:
    AscfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AscfuncContext* ascfunc();

  class  MidfuncContext : public antlr4::ParserRuleContext {
  public:
    MidfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MidfuncContext* midfunc();

  class  PdlfuncContext : public antlr4::ParserRuleContext {
  public:
    PdlfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PDL();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PdlfuncContext* pdlfunc();

  class  PeekfuncContext : public antlr4::ParserRuleContext {
  public:
    PeekfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PEEK();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PeekfuncContext* peekfunc();

  class  IntfuncContext : public antlr4::ParserRuleContext {
  public:
    IntfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntfuncContext* intfunc();

  class  SpcfuncContext : public antlr4::ParserRuleContext {
  public:
    SpcfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPC();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpcfuncContext* spcfunc();

  class  FrefuncContext : public antlr4::ParserRuleContext {
  public:
    FrefuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FRE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FrefuncContext* frefunc();

  class  PosfuncContext : public antlr4::ParserRuleContext {
  public:
    PosfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POS();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PosfuncContext* posfunc();

  class  UsrfuncContext : public antlr4::ParserRuleContext {
  public:
    UsrfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USR();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsrfuncContext* usrfunc();

  class  LeftfuncContext : public antlr4::ParserRuleContext {
  public:
    LeftfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeftfuncContext* leftfunc();

  class  RightfuncContext : public antlr4::ParserRuleContext {
  public:
    RightfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RightfuncContext* rightfunc();

  class  StrfuncContext : public antlr4::ParserRuleContext {
  public:
    StrfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STR();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StrfuncContext* strfunc();

  class  FnfuncContext : public antlr4::ParserRuleContext {
  public:
    FnfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FN();
    Var_Context *var_();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FnfuncContext* fnfunc();

  class  ValfuncContext : public antlr4::ParserRuleContext {
  public:
    ValfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAL();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValfuncContext* valfunc();

  class  ScrnfuncContext : public antlr4::ParserRuleContext {
  public:
    ScrnfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCRN();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScrnfuncContext* scrnfunc();

  class  SinfuncContext : public antlr4::ParserRuleContext {
  public:
    SinfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SinfuncContext* sinfunc();

  class  CosfuncContext : public antlr4::ParserRuleContext {
  public:
    CosfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CosfuncContext* cosfunc();

  class  TanfuncContext : public antlr4::ParserRuleContext {
  public:
    TanfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TanfuncContext* tanfunc();

  class  AtnfuncContext : public antlr4::ParserRuleContext {
  public:
    AtnfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATN();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtnfuncContext* atnfunc();

  class  RndfuncContext : public antlr4::ParserRuleContext {
  public:
    RndfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RND();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RndfuncContext* rndfunc();

  class  SgnfuncContext : public antlr4::ParserRuleContext {
  public:
    SgnfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SGN();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SgnfuncContext* sgnfunc();

  class  ExpfuncContext : public antlr4::ParserRuleContext {
  public:
    ExpfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpfuncContext* expfunc();

  class  LogfuncContext : public antlr4::ParserRuleContext {
  public:
    LogfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogfuncContext* logfunc();

  class  AbsfuncContext : public antlr4::ParserRuleContext {
  public:
    AbsfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbsfuncContext* absfunc();

  class  TabfuncContext : public antlr4::ParserRuleContext {
  public:
    TabfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAB();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TabfuncContext* tabfunc();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

