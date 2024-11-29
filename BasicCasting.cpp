#include "BasicCasting.h"
#include <any>
#include <string>

std::any stringToNumberCast(std::any value)
{
    std::string valueText = anyToStringCast(value);

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

std::any numToNumCast(std::any value)
{
    std::string newVal = anyToStringCast(value);

    if(newVal.find('.'))
    {
        for(auto i = newVal.size() - 1; 0 < i; i--)
        {
            if(newVal[i] != '0')
            {
                if(newVal[i] == '.') newVal.pop_back();
                break;
            }

            newVal.pop_back();
        }
    }

    value = stringToNumberCast(newVal);

    return value;
}

std::string anyToStringCast(std::any value)
{
    if(value.type() == typeid(std::string))
        return std::any_cast<std::string> (value);

    if (value.type() == typeid(float))
        return std::to_string(anyToFloatCast(value));

    if (value.type() == typeid(int))
        return std::to_string(anyToIntCast(value));

    if (value.type() == typeid(double))
        return std::to_string(anyToDoubleCast(value));

    return "";
}

double anyToDoubleCast(std::any value)
{
    if(value.type() == typeid(double))
        return std::any_cast<double>(value);

    if(value.type() == typeid(std::string))
        return std::stod(anyToStringCast(value));

    if(value.type() == typeid(int))
        return anyToIntCast(anyToIntCast(value));

    if(value.type() == typeid(float))
        return anyToFloatCast(value);

    return 0.0;
}

int anyToIntCast(std::any value)
{
    if(value.type() == typeid(int))
        return std::any_cast<int>(value);

    if(value.type() == typeid(double))
        return static_cast<int>(anyToDoubleCast(value));

    if(value.type() == typeid(std::string))
        return std::stoi(anyToStringCast(value));

    if(value.type() == typeid(float))
        return static_cast<int>(anyToFloatCast(value));

    return 0;
}

float anyToFloatCast(std::any value)
{
    if(value.type() == typeid(float))
        return std::any_cast<float>(value);

    if(value.type() == typeid(int))
        return anyToIntCast(value);

    if(value.type() == typeid(double))
        return static_cast<float>(anyToDoubleCast(value));

    if(value.type() == typeid(std::string))
        return std::stof(anyToStringCast(value));

    return 0;
}
