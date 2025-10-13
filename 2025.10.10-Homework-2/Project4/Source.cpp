
#include <cstdio>

int main(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    scanf_s("%d %d %d", &a, &b, &c);
    scanf_s("%d %d %d", &d, &e, &f);

    int h1 = (a <= d && b <= e && c <= f);
    int h2 = (a <= d && b <= f && c <= e);
    int h3 = (a <= e && b <= d && c <= f);
    int h4 = (a <= e && b <= f && c <= d);
    int h5 = (a <= f && b <= d && c <= e);
    int h6 = (a <= f && b <= e && c <= d);
    int H = h1 || h2 || h3 || h4 || h5 || h6;

    int s1 = (d <= a && e <= b && f <= c);
    int s2 = (d <= a && e <= c && f <= b);
    int s3 = (d <= b && e <= a && f <= c);
    int s4 = (d <= b && e <= c && f <= a);
    int s5 = (d <= c && e <= a && f <= b);
    int s6 = (d <= c && e <= b && f <= a);
    int S = s1 || s2 || s3 || s4 || s5 || s6;

    if (H && S)
    {
        printf("Boxes are equal");
    }
    else if (H)
    {
        printf("The first box is smaller than the second one");
    }
    else if (S)
    {
        printf("The first box is larger than the second one");
    }
    else
    {
        printf("Boxes are incomparable");
    }

    return 0;
}