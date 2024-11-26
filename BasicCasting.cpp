#include "BasicCasting.h"
#include "BasicVisitorImpl.h"
#include <string>
#include <any>

std::any stringToNumberCast(std::string value)
{
    std::string valueText = value;

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

std::string numToStringCast(std::any value)
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

std::any numToNumCast(std::any value)
{
    std::string newVal = numToStringCast(value);

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
