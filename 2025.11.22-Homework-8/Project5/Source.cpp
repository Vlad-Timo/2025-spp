#include <stdio.h>
int main(int argc, char** argv)
{
    char line[1001];
    if (fgets(line, sizeof(line), stdin) != NULL)
    {
        int count = 0;
        int in_word = 0;

        for (int i = 0; line[i] != '\0' && line[i] != '\n'; i++)
        {
            if (line[i] != ' ' && !in_word)
            {
                in_word = 1;
                count++;
            }
            else if (line[i] == ' ')
            {
                in_word = 0;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}