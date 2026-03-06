#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

long long Factorial(int n)
{
	long long f = 1;
	for (int i = 2; i <= n; i++)
	{
		f *= i;
	}
	return f;
}

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	if ((a <= 20) && (b <= 20))
	{
		printf("%lld", Factorial(a) / (Factorial(b) * Factorial(a - b)));
	}
	return 0;
}