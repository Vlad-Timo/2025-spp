#include <stdio.h>

int main()
{
	int num1;
	scanf_s("%d", &num1);
	printf("The next number for the number %d is %d.\n", num1, num1 + 1);
	printf("The previous number for the number %d is %d.", num1, num1 - 1);

	return 0;
}