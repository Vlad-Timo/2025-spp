#include <cstdio>
#include <cmath>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);

    if (a == 0 && b == 0 && c == 0)
    {
        printf("-1");
    }
    else if (a == 0)
    {
        if (b == 0)
        {
            printf("0");
        }
        else 
        {
            printf("1\n%.5lf", -c * 1.0 / b);
        }
    }
    else
    {
        double d = b * b - 4.0 * a * c;

        if (d < 0)
        {
            printf("0");
        }
        else if (d == 0)
        {
            printf("1\n%.5lf", -b / (2.0 * a));
        }
        else
        {
            double x1 = (-b - sqrt(d)) / (2.0 * a);
            double x2 = (-b + sqrt(d)) / (2.0 * a);
            if (x1 > x2)
            {
                printf("2\n%.5lf\n%.5lf", x2, x1);
            }
            else
            {
                printf("2\n%.5lf\n%.5lf", x1, x2);
            }
        }
    }

    return 0;
}