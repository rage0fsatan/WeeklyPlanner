#include "StdFunctions.h"

#define ERROR_NO_INPUT 0x1;

const char* StdFunctions::GetInputString()
{
    std::string input = "";

    std::cin >> input;

    if(input == "") return (const char*)ERROR_NO_INPUT;

    return input.c_str();
}