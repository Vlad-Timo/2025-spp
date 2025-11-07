#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	if ((n < 1) || (n > 10000))
	{
		return 1;
	}
	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL)
	{
		return 1;
	}
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			c++;
		}
		else if (arr[i] == 0)
		{
			c += 0;
		}
	}
	printf("%d", c);
	free(arr);
	return 0;
}