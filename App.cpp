#include <iostream>
#include <string>
#include <fstream>
#include "BasicParser.h"
#include "BasicLexer.h"
#include "BasicVisitorImpl.h"

using namespace antlr4;

const std::string SCRIPTTYPE = ".app";

int main (int argc, char *argv[]) {

    std::string file;

    if (argc > 1) // Check of arguments available
        file = argv[1];

    // Check for a valid input
    if(file.empty() || file.size() < SCRIPTTYPE.size() + 1 || file.substr(file.size() - 4, 4) != SCRIPTTYPE)
    {
        std::cerr << "Invalid input: " << file.c_str() << std::endl;
        return 1;
    }

    std::ifstream stream;
    stream.open(file);

    if(!stream) // Check if file exists
    {
        std::cerr << "File " << file << " does not exist" << std::endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    BasicLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();

    BasicParser parser(&tokens);

    BasicParser::ProgContext *tree = parser.prog();

    BasicVisitorImpl visitor;
    visitor.visitFile(tree);

    return 0;
}
