#include <iostream>
#include <type_traits>

int a[5] = { 1, 2, 3, 4, 5 };

using inta5 = int[5];
using pinta5 = int(*)[5];

int (*foo())[5]
{
	return &a;
}

auto bar()
{
	return &a;
}

inta5* baz()
{
	return &a;
}

pinta5 bom()
{
	return &a;
}

int main()
{
	auto p1 = foo();
	auto p2 = bar();
	auto p3 = baz();
	auto p4 = bom();
}
