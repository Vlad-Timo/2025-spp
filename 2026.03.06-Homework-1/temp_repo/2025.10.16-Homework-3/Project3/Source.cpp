#include <stdio.h>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int n1 = a;
	int n2 = b;
	while (b != 0)
	{
		int c = b;
		b = a % b;
		a = c;
	}
	int nod = a;
	printf("%d", (n1 * n2) / nod);
	return 0;
}