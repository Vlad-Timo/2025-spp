#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char line[1001];
    if (fgets(line, sizeof(line), stdin) != NULL)
    {
        line[strcspn(line, "\n")] = '\0';
        for (int i = 0; line[i] != '\0'; i++)
        {
            for (int j = i + 1; line[j] != '\0'; j++)
            {
                if (line[i] == line[j])
                {
                    printf("%c\n", line[i]);
                    return 0;
                }
            }
        }
    }
    return 0;
}