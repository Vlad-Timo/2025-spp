#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Bool(bool x, bool y, bool z)
{

	int a = 0;
	int b = 0;
	if (x == 0)
	{
		a++;
	}
	else
	{
		b++;
	}
	if (y == 0)
	{
		a++;
	}
	else
	{
		b++;
	}
	if (z == 0)
	{
		a++;
	}
	else
	{
		b++;
	}
	if (a > b)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main(int argc, char** argv)
{
	int x;
	int y;
	int z;

	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	
	printf("%d", Bool(x, y, z));
	return 0;
}