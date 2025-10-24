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

    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}