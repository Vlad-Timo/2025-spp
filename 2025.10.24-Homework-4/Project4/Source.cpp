#include <stdio.h> 
#include <math.h> 
int main(int argc, char** argv)
{
    int arr[1000];
    int a = 0;
    int b = 0;

    scanf_s("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    scanf_s("%d", &b);
    int c = arr[0];
    int min = abs(arr[0] - b);
    for (int i = 1; i < a; i++)
    {
        int d = abs(arr[i] - b);
        if (d < min)
        {
            min = d;
            c = arr[i];
        }
        else if (d == min)
        {
            if (arr[i] < c)
            {
                c = arr[i];
            }
        }
    }
    printf("%d", c);
    return 0;
}