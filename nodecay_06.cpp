#include <typeinfo>
#include <iostream>

int main()
{
	double arr[10]{};

	constexpr auto a_arr = alignof(arr);
	constexpr auto p_arr = alignof(&arr[0]);
}
