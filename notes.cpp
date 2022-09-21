// Game Engines

Macros:
#include <iostream>
// (the preprocessor replaces this line with the whole iostream code, 
//      C++ doesn't see this line, only the replaced code)

#ifdef _DEBUG
    #define LOG(x) std::cout << x << std::endl
#else
    #define LOG(x) std::cout << "NO DEBUG" << std::endl;
#endif

Preprocessor is the first to interact with the code 
Preprocessor -> C++ COMPILER -> main.obj -> LINKER -> main.exe



typedef std::vector<std::string>::const_iterator _name_
...
same thing as
...
using ____


console printing is VERY slow, endl makes it slower. 

g++ -std=c++17 -fsanitize=address 
// This is an address sanitizer, it exposes many hard-to-find bugs with zero false positives. 
g++ -std=c++17 -fsanitize=undefined 
// This exposes undefined variables and terminates program execution. 

// release build doesn't use sanitizer !! 


int* num = new int { 0 };
// If this isn't closed, there is a memory leak. Small, but quickly accumulates. 
// USE SMART POINTERS: pointers that automatically delete when it goes out of scope or points to different memory address. 

#include <memory>       // unique_ptr
std::unique_ptr<int> ptr1{ new int{0} };
std::unique_ptr<int> ptr2{ new int{0} };

ptr1 = ptr2; // unique_ptr doesn't allow other pointers to point to the data it's pointing to. 

// 09/12/2022

// CMake
// - cross platform
// CMakeLists.txt (a file that describes your whole program
//        lets it so that your program works on any VSCode version, and CMake is responsible) 


// 09/15/2022

/* Game Loop

while(True) {
    OnUpdate() {
        // collect input

        // update game world

        // render frame
    }
}

*/

// In the game, in the solution properties, add an include directory to make VS know
//   which directory to check for all the project content 

// 09/19/2022

// Inheritance means all the variables and functions from the parent class will be available to the child class. 
//  class Class_A : public namespace::Class_B

// make original function from parent class "virtual" : this means every time the method is called, 
//      the computer will be told to check what class its from, since there might be an override. 

// __declspec(dllexport) is replaced by LEAF_API