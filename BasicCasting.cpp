#include "BasicCasting.h"
#include "BasicVisitorImpl.h"
#include <string>
#include <unordered_map>
#include <any>
#include "BasicParser.h"

std::any numberCast(BasicParser::Func_Context *value, std::unordered_map<std::string, std::any> *varValues)
{
    std::string valueText = value->getText();

    // Use stringstreams to detect the type
    if (valueText.find('.') == std::string::npos)
    {
        // No '.' means it's likely an integer
        int intValue = std::stoi(valueText);
        return intValue;
    }
    else
    {
        // Check for precision
        double doubleValue = std::stod(valueText);
        if (valueText.find('e') != std::string::npos || valueText.find('E') != std::string::npos)
        {
            // Handle scientific notation as double
            return doubleValue;
        }
        else if (valueText.size() - valueText.find('.') > 7)
        {
            return doubleValue;
        }
        else
        {
            float floatValue = std::stof(valueText);
            return floatValue;
        }
    }

    return 0;
}

std::string stringCast(std::any value, std::unordered_map<std::string, std::any> *varValues)
{
    if(value.type() == typeid(std::string))
        return std::any_cast<std::string> (value);

    if (value.type() == typeid(float))
        return std::to_string(std::any_cast<float> (value));

    if (value.type() == typeid(int))
        return std::to_string(std::any_cast<int> (value));

    if (value.type() == typeid(double))
        return std::to_string(std::any_cast<double> (value));

    return "";
}
