#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char ToUpper(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - ('a' - 'A');
	}
	return c;
}
int main(int argc, char** argv)
{
	unsigned char c;
	scanf("%c", &c);
	printf("%c", ToUpper(c));
	return 0;
}