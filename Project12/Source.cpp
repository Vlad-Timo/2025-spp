#include <stdio.h>

int main()
{
    long long N;
    long long M;
    scanf_s("%lld %lld", &N, &M);
    long long a;
    a = ((N - 1) * (M - 1) + 1);
    printf("%lld", a);
    return 0;
}