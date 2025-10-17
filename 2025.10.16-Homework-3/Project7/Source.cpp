#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	int f = 0;
	for (int x = -100; x <= 100; x++)
	{
		int y = (a * pow(x, 3)) + (b * pow(x, 2)) + (c * pow(x, 1)) + d;
		if (y == 0)
		{
			printf("%d ", x);
			f = 1;
		}
	}
	if (!f)
	{
		printf("%d", 0);
	}

	return 0;
}