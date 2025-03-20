#include <type_traits>

using cint = const int;

int main()
{
	cint a1[4]{};
	const int a2[4]{};

	constexpr bool b = std::is_same_v<decltype(a1), decltype(a2)>; //true
}
