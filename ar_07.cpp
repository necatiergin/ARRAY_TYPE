#include <type_traits>
#include <iostream>

int main()
{
	char a[5]{};
	const char b[5]{};
	volatile char c[5]{};
	const volatile char d[5]{};

	constexpr bool b1 = std::is_same_v<decltype(a), decltype(b)>;
	constexpr bool b2 = std::is_same_v<decltype(a), decltype(c)>;
	constexpr bool b3 = std::is_same_v<decltype(a), decltype(d)>;
	constexpr bool b4 = std::is_same_v<decltype(b), decltype(c)>;
	constexpr bool b5 = std::is_same_v<decltype(b), decltype(d)>;
	constexpr bool b6 = std::is_same_v<decltype(c), decltype(d)>;

	std::cout << (b1 or b2 or b3 or b4 or b5 or b6);
}
