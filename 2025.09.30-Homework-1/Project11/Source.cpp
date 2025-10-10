#include <stdio.h>

int main()
{
    long long N;
    scanf_s("%lld", &N);
    long long a;
    a = ((N + 1) / 2) * ((N + 1) / 2);

    printf("%lld", a);
    return 0;
}