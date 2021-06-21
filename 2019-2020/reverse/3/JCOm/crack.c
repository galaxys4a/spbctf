#include <stdio.h>

int main()
{
	int a;
	int b;
	int t;
	int n;

	a = 1;
	b = 1;
	n = 2;
	while (b != 866988873)
	{
		t = b;
		b = a + b + 1;
		a = t;
		n = n + 1;
	}

	printf("%d\n", n);
	return 0;
}
