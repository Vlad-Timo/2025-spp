#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int FindMin(int n1, int n2, int n3, int n4)
{
	int min = n1;
	if (n2 < min)
	{
		min = n2;
	}
	if (n3 < min)
	{
		min = n3;
	}
	if (n4 < min)
	{
		min = n4;
	}
	return min;
}
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	printf("%d", FindMin(a, b, c, d));
	return 0;
}