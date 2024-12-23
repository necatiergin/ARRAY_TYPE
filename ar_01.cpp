#include <iostream>

int main()
{
	int a[4]{ 0 };

	std::cout << "sizeof(int) = " << sizeof(int) << '\n';
	std::cout << a << "    " << &a[0] << '\n';
	std::cout << a + 1 << "     " << &a[1] << '\n';

	std::cout << "sizeof(int[4]) = " << sizeof(int[4]) << '\n';
	std::cout << "sizeof(a)      = " << sizeof(a) << '\n';
	std::cout << &a << '\n';
	std::cout << &a + 1 << '\n';
}
