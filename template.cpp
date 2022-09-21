// This is a template function

// template <class T>
// <return-type> <function-name> (  <parameters of type T> )
// {
//                  //function body
// }
// Where: 
// template   ------    keyword
// class T     ------    template type parameter enclosed within a pair of angle brackets(< >) called generic dt.

#include <iostream>

template<class T>
void show(T a,T b)
{
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << std::endl;
}
 
int main()
{
    show(2, 5);
    show(2.6, 7.6);
    show("2.65", "7.68");
    return 0;
}




// A generic sort function
template <class T>
void sort(T arr[], int size)
{
    // code to implement Quick Sort
}
 
// Template Specialization: A function
// specialized for char data type
template <>
void sort<char>(char arr[], int size)
{
    // code to implement counting sort
}

