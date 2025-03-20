#include <iostream>

template <typename T>
void foo(T& param) 
{
    std::cout << "sizeof param in foo: " << sizeof(param) << '\n';
}

template <typename T>
void bar(T param)
{
    std::cout << "sizeof param in bar: " << sizeof(param) << '\n';
}

int main() 
{
    int arr[100]{};

    foo(arr); 
    bar(arr); 
}
