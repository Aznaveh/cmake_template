#include <iostream>

#include "header.hpp"
template <typename T>
void MyClass::myMethod()
{
    std::cout << "The size is " << sizeof(T) << "\n";
}
//explicit instantiation
template void MyClass::myMethod<int>();
