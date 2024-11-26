#include "BasicBaseVisitor.h"
using namespace antlr4;

/*
     * Covert data type to function type
     *
     * @param value Value to convert to datatype
     */
std::any stringToNumberCast(std::string value);

/*
     * Covert data type to string
     *
     * @param value Input to convert to string
     */
std::string numToStringCast(std::any value);

/*
     * Covert a number datatype to a better
     * representative datatype
     *
     * @param value Input to convert datatype
     */
std::any numToNumCast(std::any value);
