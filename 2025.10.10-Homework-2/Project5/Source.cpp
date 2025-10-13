#include <stdio.h>

int main(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d %d %d", &a, &b, &c);

    if (a != 0)
    {
        printf("%d", a);
    }
    if (b != 0)
    {
        if (a != 0 && b > 0)
        {
            printf("+");
        }
        if (b == -1)
        {
            printf("-");
        }
        else if (b == 1)
        {
        }
        else
        {
            printf("%d", b);
        }
        printf("x");
    }
    if (c != 0)
    {
        if ((a != 0 || b != 0) && c > 0)
        {
            printf("+");
        }
        if (c == -1)
        {
            printf("-");
        }
        else if (c == 1)
        {
        }
        else
        {
            printf("%d", c);
        }
        printf("y");
    }
    if (a == 0 && b == 0 && c == 0)
    {
        printf("0");
    }
    return 0;
}