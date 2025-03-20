#include <cstddef>

template <typename T, std::size_t N>
constexpr auto Size(const T(&)[N])
{
	return N;
}

int main()
{
	int a1[10]{};
	double a2[20]{};
	int a3[5][10]{};

	constexpr auto sz1 = Size(a1);
	constexpr auto sz2 = Size(a2);
	constexpr auto sz3 = Size(a3);
}

