#include <cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	if ((a % 2 == 0) && (a > 1))
	{
		printf("%d", a / 2);
	}
	else if ((a % 2 == 1) && (a > 1))
	{
		printf("%d", a);
	}
	else
	{
		printf("0");
	}

	return 0;
}