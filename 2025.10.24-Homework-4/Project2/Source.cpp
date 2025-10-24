#include <stdio.h> 
int main(int argc, char** argv)
{
    int arr[1000];
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    scanf_s("%d %d", &b, &c);
    b = b - 1;
    c = c - 1;
    int max = arr[b];
    int index = b;
    for (int i = b + 1; i <= c; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    printf("%d ", max);
    printf("%d", index + 1);
    return 0;
}