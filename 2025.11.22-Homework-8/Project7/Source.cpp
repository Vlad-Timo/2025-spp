#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char str[1001];
    scanf("%1000s", str);
    int len = strlen(str);
    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}