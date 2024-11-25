#include "BasicBaseVisitor.h"
#include "BasicParser.h"
using namespace antlr4;

/*
     * Covert data type to function type
     *
     * @param value Value to convert to datatype
     * @param varValues Variables stored
     */
std::any numberCast(BasicParser::Func_Context *value, std::unordered_map<std::string, std::any> *varValues);

/*
     * Covert data type to string
     *
     * @param value Input to convert to string
     * @param varValues Variables stored
     */
std::string stringCast(std::any value, std::unordered_map<std::string, std::any> *varValues);
