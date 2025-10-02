#include <stdio.h>
int main()
{
    int K, N;
    scanf_s("%d %d", &K, &N);

    int a = (N - 1) / K + 1;
    int b = (N - 1) % K + 1;

    printf("%d %d", a, b);
    return 0;
}