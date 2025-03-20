template <typename T>
struct Myclass { };

int main()
{
	Myclass<int[5]> x;
	Myclass<int[4]> y;
	Myclass<int[]> z;

	z = x; // error
	z = y; // error
	x = y; // error
}
