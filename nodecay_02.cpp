int main()
{
	int a[5]{};

	auto p1 = &a;
	int (*p2)[5] = &a;
	auto& r1 = a;
	int (&r2)[5] = a;
}
