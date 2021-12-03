#include <string>
#include <iostream>

std::string convertToDoubleDigitStrings(int& a)
{
    if (a > 9)
    {
        return std::to_string(a);
    }
    else
    {
        return "0" + std::to_string(a);
    }
}

int convertToInt(char firstIndex, char secondIndex, std::string& s)
{
    std::string toIntString;
    toIntString.push_back(s[firstIndex]);
    toIntString.push_back(s[secondIndex]);

    return std::stoi(toIntString);
}

std::string timeConversion(std::string s) {
    //Get hour, min and secs in int form
    int hour = convertToInt(0, 1, s);
    int min = convertToInt(3, 4, s);
    int sec = convertToInt(6, 7, s);

    //Convert from 12 to 24 hour time
    bool pm = (s[8] == 'P') ? true : false;
    hour = (pm) ? hour + 12 : hour;

    //Exceptions
    hour = (!pm && hour == 12) ? 0 : hour;
    hour = (pm && hour == 24) ? 12 : hour;

    //Build the output string in correct format
    std::string output =
        convertToDoubleDigitStrings(hour)
        + ":"
        + convertToDoubleDigitStrings(min)
        + ":"
        + convertToDoubleDigitStrings(sec);

    return output;
}

/*
void main()
{
    std::string time = "07:05:45PM";
    
    std::string output=timeConversion(time);

    std::cout << output;
}
*/