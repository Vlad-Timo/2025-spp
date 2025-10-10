#include <stdio.h>

int main()
{
	long long N;
	long long K;
	scanf_s("%lld %lld", &N, &K);
	long long a;
	long long b;
	long long c;
	long long d;
	a = K / N;
	b = K % N;
	d = b != 0;
	c = (N - b) * d;
	printf("%lld %lld %lld", a, b, c);
	return 0;
}