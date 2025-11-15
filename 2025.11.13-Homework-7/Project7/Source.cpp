#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int Fibonacci(int n2)
{
	if ((n2 == 1) || (n2 == 0))
	{
		return 1;
	}
	return Fibonacci(n2 - 1) + Fibonacci(n2 - 2);
}

int main(int argc, char** argv)
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", Fibonacci(n));

	return 0;
}