#include <stdio.h>

int main(int argc, char** argv)
{
	int a = 0;
	int b = -1;
	int i = 1;
	int c = 1;
	do
	{
		scanf_s("%d", &a);
		if (a == b)
		{
			i++;
		}
		else
		{
			if (i > c)
			{
				c = i;
			}
			i = 1;
		}
		b = a;
	}
	while (a != 0);
	printf("%d", c);
	return 0;
}