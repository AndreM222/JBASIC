#include "BasicBaseVisitor.h"
#include "BasicParser.h"
#include "BasicCasting.h"
using namespace antlr4;

class  BasicVisitorImpl : public BasicBaseVisitor {
public:

    /*
    * Parse through the lines to obtain actions
    *
    * @param fileContext The parsed tree
    */
    void visitFile(BasicParser::ProgContext *fileContext);

private:

    /*
     * Get rules of the current line
     *
     * @param lineNumber Number of line to obtain rules
     */
    void visitAction(BasicParser::LinenumberContext *lineNumber);

    /*
     * Actions to be executed
     *
     * @param rule Rules to execute
     */
    void statementAction(BasicParser::AmprstmtContext *rule);

    /*
     * Expressions to be executed
     *
     * @param expr Rules to execute
     */
    std::any expAction(BasicParser::ExpressionContext *expr);

    std::any funcAction(BasicParser::Func_Context *func);

    std::any addMathAction(std::vector<BasicParser::RelationalExpressionContext*> expr);

    std::string symbolAction(std::vector<antlr4::tree::TerminalNode*> addExpr);

    std::string multMathAction(std::vector<BasicParser::MultiplyingExpressionContext*> mulExpr);

    std::string expoMathAction(std::vector<BasicParser::ExponentExpressionContext*> expoExpr);

    std::string signMathAction(std::vector<BasicParser::SignExpressionContext*> expoExpr);
};
