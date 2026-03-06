#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int DoublePower(double n1, int n2)
{
	if (n2 < 0)
		return n2;
}
int main(int argc, char** argv)
{
	double a = 0;
	int n = 0;

	scanf("%lf", &a);
	scanf("%d", &n);
	double c = pow(a, n);
	printf("%.10f", c);
	return 0;
}