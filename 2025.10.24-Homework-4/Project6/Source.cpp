#include <stdio.h> 
int main(int argc, char** argv)
{
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);
    for (int i = 1; i < a; i++)
    {
        printf("%d ", i);
    }

    for (int i = b; i >= a; i--)
    {
        printf("%d ", i);
    }

    for (int i = d; i >= c; i--)
    {
        printf("%d ", i);
    }

    for (int i = d + 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}