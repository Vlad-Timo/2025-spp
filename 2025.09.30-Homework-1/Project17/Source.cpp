#include <stdio.h>

int main()
{
	int a;
	scanf_s("%d", &a);
	printf("%d", (a % 10) + ((a / 10) % 10) + ((a / 100) % 10));
	return 0;
}