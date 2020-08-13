#include <string>
#include <algorithm>

int getNumFromStr(const std::string& from) 
{
    const auto isDigit = [](const char c) 
    {
        return c >= '0' && c <= '9';
    };

    const auto begin = std::find_if(from.begin(), from.end(), isDigit);

    const auto end = std::find_if_not(begin, from.end(), isDigit);

    const std::string raw(begin, end);

    return std::stoi(raw);
}