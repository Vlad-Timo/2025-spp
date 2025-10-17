#include <stdio.h>

int main(int argc, char** argv)
{
    int a = 0;
    int m1 = -101;
    int m2 = -101;
    do
    {
        scanf_s("%d", &a);
        if (a != 0 && a < 101)
        {
            if (a > m1)
            {
                m2 = m1;
                m1 = a;
            }
            else if (a == m1 && m2 == -101)
            {
                m2 = a;
            }
            else if (a < m1 && (a > (m2 || m2 == -101)))
            {
                m2 = a;
            }
        }
    } 
    while (a != 0);

    printf("%d", m2);

    return 0;
}