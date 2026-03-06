#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Han(int n, int from, int to)
{
	if (n >= 1)
	{
		int temp = 6 - from - to;
		Han(n - 1, from, temp);
		printf("Disk %d move from %d to %d\n", n, from, to);
		Han(n - 1, temp, to);
	}
}
int main(int argc, char** argv)
{
	int n = 0;
	scanf("%d", &n);
	Han(n, 1, 2);
	return 0;
}