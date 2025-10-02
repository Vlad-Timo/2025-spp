#include <stdio.h>

int main()
{
    int a, b;
    scanf_s("%d %d", &a, &b);
    int c;
    c = (a % b == 0) || (b % a == 0);

    printf("%d", 1 + (1 - c) * 2);

    return 0;
}