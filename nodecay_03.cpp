#include <type_traits>

int main()
{
	int a1[5]{};
	decltype(a1) a2{};

	constexpr bool  b1 = std::is_same_v<decltype(a1), decltype(a2)>;
	constexpr bool  b2 = std::is_same_v<decltype(a1), int[5]>;
	
	static_assert(b1 && b2);
}
