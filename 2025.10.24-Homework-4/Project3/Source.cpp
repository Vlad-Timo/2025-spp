#include <stdio.h> 
int main(int argc, char** argv)
{
    int arr[1000];
    int a = 0;
    scanf_s("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < a; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    for (int i = 0; i < a; i++)
    {
        if (arr[i] == max)
        {
            arr[i] = min;
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}