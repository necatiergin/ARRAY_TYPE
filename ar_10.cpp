#include <iterator>

template <typename T, std::size_t N>
constexpr auto Size(const T(&)[N]) noexcept
{
	return N;
}

int main()
{
	int a1[10]{};
	double a2[20]{};
	int a3[5][10]{};

	constexpr auto sz1 = std::size(a1);
	constexpr auto sz2 = std::size(a2);
	constexpr auto sz3 = std::size(a3);
}

