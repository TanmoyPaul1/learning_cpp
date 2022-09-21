#include <iostream>

// VSCode has _DEBUG already as a macro, use Debug mode to activate it. 
// #define _DEBUG

#ifdef _DEBUG
    #define LOG(x) std::cout << x << std::endl
#else
    #define LOG(x) 
#endif

int main(int argc, char const *argv[])
{
    LOG("Hi");
    std::cout << "Bye" << std::endl;
    return 0; 
}
