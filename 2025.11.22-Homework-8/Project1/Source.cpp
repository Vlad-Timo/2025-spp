#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int IsDigit(unsigned char c)
{
	return (c >= '0' && c <= '9');
}
int main(int argc, char** argv)
{
	unsigned char c;
	scanf("%c", &c);
	if (IsDigit(c))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}