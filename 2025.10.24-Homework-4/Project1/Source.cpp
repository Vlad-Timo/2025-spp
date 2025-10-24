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
    int b = 0;
    int c = 0;
    scanf_s("%d", &b);
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == b)
        {
            c++;
        }
    }
    printf("%d ", c);
    return 0;
}