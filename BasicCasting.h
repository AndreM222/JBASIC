#include "BasicBaseVisitor.h"
using namespace antlr4;

/*
     * Covert data type to function type
     *
     * @param value Value to convert to datatype
     */
std::any stringToNumberCast(std::any value);

/*
     * Covert data type to string
     *
     * @param value Input to convert to string
     */
std::string anyToStringCast(std::any value);

/*
     * Covert a number datatype to a better
     * representative datatype
     *
     * @param value Input to convert datatype
     */
std::any numToNumCast(std::any value);

/*
     * Covert data type to double
     *
     * @param value Input to convert datatype
     */
double anyToDoubleCast(std::any value);

/*
     * Covert data type to int
     *
     * @param value Input to convert datatype
     */
int anyToIntCast(std::any value);

/*
     * Covert data type to float
     *
     * @param value Input to convert datatype
     */
float anyToFloatCast(std::any value);
