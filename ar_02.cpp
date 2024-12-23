#include <iostream>

int main()
{
	int a[5]{ 0 };
	
	int (*pa)[5] = &a;
	//auto pa = &a;

	for (int i = 0; i < 5; ++i)
		(*pa)[i] = i;

	int(&ra)[5] = a;
	//auto& ra = a;

	for (int i = 0; i < 5; ++i)
		++ra[i];

	for (int i = 0; i < 5; ++i)
		std::cout << a[i];

}
