int main() {
	int *a{ new int[3]{ 6,7,8 } };
	int *b{ new int{ 5 } };
	bool *c{ new bool{ true } };
	struct {
		int s1{ -7 }; int **s2{ nullptr };
	}d;
	*a += *b;
	a[2] = *b;
	d.s2 = &a;
	*c = d.s2 != nullptr;
	d.s1 += a[1] + *(a + 2);
	delete[] a;
	delete b, c;
	a = b = nullptr;
	return 0;
	}