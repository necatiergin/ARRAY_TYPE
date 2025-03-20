#include <iostream>

int main()
{
	int ai[10]{};
	double ad[10]{};

	std::cout << "sizeof(int*)        = " << sizeof(int*) << '\n';
	std::cout << "sizeof(int[10])     = " << sizeof(int[10]) << '\n';
	std::cout << "sizeof(double*)     = " << sizeof(double*) << '\n';
	std::cout << "sizeof(double[10])  = " << sizeof(double[10]) << '\n';
	std::cout << "sizeof(ai)          = " << sizeof(ai) << '\n';
	std::cout << "sizeof(&a[0])       = " << sizeof(&ai[0]) << '\n';
	std::cout << "sizeof(a)           = " << sizeof(ad) << '\n';
	std::cout << "sizeof(&a[0])       = " << sizeof(&ad[0]) << '\n';
}
