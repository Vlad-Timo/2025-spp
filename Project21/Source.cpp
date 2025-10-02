#include <stdio.h>

int main()
{
	int a;
	int b;
	scanf_s("%d %d", &a, &b);
	int n;
	int m;
	int p;
	int k;
	m = a * b;
	n = m % 109;
	p = 109 + n;
	k = p % 109;
	printf("%d", k + 1);
	return 0;
}
