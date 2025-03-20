#include <typeinfo>
#include <iostream>

int main()
{
	int a[10]{};

	std::boolalpha(std::cout);

	std::cout << typeid(a).name() << '\n';
	std::cout << (typeid(a) == typeid(int*)) << '\n';
	std::cout << (typeid(a) == typeid(int[10])) << '\n';
}
