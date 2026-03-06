#include <stdio.h>

int main(int argc, char** argv)
{
	double a = 0;
	double b = 0;
	int i = 1;
	scanf_s("%lf %lf", &a, &b);
	while ((a < b) && ((b - a) > 0.000001))
	{
		a = a * 1.15;
		i++;
	}
	printf("%d", i);
	return 0;
}