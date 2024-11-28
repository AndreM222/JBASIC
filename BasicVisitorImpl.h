#include "BasicBaseVisitor.h"
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
     * Values return depending on type
     *
     * @param func Rules to execute
     */
    std::any funcAction(BasicParser::Func_Context *func);

    /*
     * Expressions to be executed
     *
     * @param expr Rules to execute
     */
    std::any expAction(BasicParser::ExpressionContext *expr);

    /*
     * Expressions to be executed
     *
     * @param expr Rules to execute
     */
    std::any relationsAction(BasicParser::ExpressionContext *expr);

    /*
     * Adding and subtraction expressions
     *
     * @param expr Rules to execute
     */
    std::vector<std::any> addMathAction(std::vector<BasicParser::AddingExpressionContext*> currExp);

    /*
     * Division and multiplication expressions
     *
     * @param mulExpr Rules to execute
     */
    std::vector<std::any> multMathAction(std::vector<BasicParser::MultiplyingExpressionContext*> mulExpr);

    /*
     * Exponent expression
     *
     * @param expoExpr Rules to execute
     */
    std::vector<std::any> expoMathAction(std::vector<BasicParser::ExponentExpressionContext*> expoExpr);

    /*
     * Values used in expression expressions
     *
     * @param expoExpr Rules to execute
     */
    std::vector<std::any> signMathAction(std::vector<BasicParser::SignExpressionContext*> signExpr);
};
