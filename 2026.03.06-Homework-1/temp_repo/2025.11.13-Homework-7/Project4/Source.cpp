#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int Prime(int a)
{
	if (a <= 1)
	{
		return 0;
	}
	if (a == 2)
	{
		return 1;
	}
	if (a % 2 == 0)
	{
		return 0;
	}
	int b = sqrt(a);
	for (int i = 3; i <= b; i += 2)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main(int argc, char** argv)
{
	int a = 0;
	scanf("%d", &a);
	if (Prime(a))
	{
		printf("prime");
	}
	else
	{
		printf("composite");
	}
	return 0;
}