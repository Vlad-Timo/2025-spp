#include <stdio.h>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf_s("%d", &c);
		if (c < 1)
		{
			b = 0;
		}
		else
		{
			b = b + 1;
		}
		if (b > d)
		{
			d = b;
		}
	}
	printf("%d", d);
	return 0;
}