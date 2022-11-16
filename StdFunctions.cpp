#include "StdFunctions.h"

#define ERROR_NO_INPUT 0x1;

const char* StdFunctions::GetInputString()
{
    std::string input = "";

    std::cin >> input;

    return input.c_str();
};

const char* GetInputString(const char* _msg)
{
    std::cout << _msg << std::endl;

    std::string input = "";

    std::cin >> input;

    return input.c_str();
}
    

float StdFunctions::GetInputFloat()
{
    float input = 0;

    std::cin >> input;

    return input;
};

float GetInputFloat(const char* _msg);

int GetInputInt();
int GetInputInt(const char* _msg);