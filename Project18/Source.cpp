#include <stdio.h>

int main()
{
	long long a;
	scanf_s("%lld", &a);
	printf("%lld", (a + 9) / 10);

	return 0;
}