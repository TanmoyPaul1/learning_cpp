#include <iostream>
#include <cassert>

// #define _DEBUG

#ifdef _DEBUG
    #define LOG(x) std::cout << x << std::endl
#else
    #define LOG(x) std::cout << "NO DEBUG" << std::endl; \
            std::cout << "Multi-line" << std::endl;
#endif

// Asserts
// Assertions are mainly used to check logically impossible situations.
// When the conditional expression in an assert statement is set to true, the program continues normally. 
// But when the expression is false, an error message is issued and the program is terminated.
int Foo(int n)
{
    assert(n > 0);
    
}

int main(int argc, char const *argv[])
{
    LOG("HI");
    return 0; 
}
