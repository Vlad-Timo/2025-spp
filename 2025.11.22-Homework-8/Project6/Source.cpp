#include <stdio.h>

int main() {
    char line[1001];

    if (fgets(line, sizeof(line), stdin) == NULL) 
    {
        return 0;
    }
    int max_len = 0;
    int cur_len = 0;
    int max_start = -1;
    int cur_start = -1;
    int in_word = 0;

    for (int i = 0; line[i] && line[i] != '\n'; i++)
    {
        if (line[i] != ' ')
        {
            if (!in_word)
            {
                in_word = 1;
                cur_len = 1;
                cur_start = i;
            }
            else
            {
                cur_len++;
            }
        }
        else if (in_word)
        {
            if (cur_len > max_len)
            {
                max_len = cur_len;
                max_start = cur_start;
            }
            in_word = 0;
        }
    }
    if (in_word && cur_len > max_len)
    {
        max_len = cur_len;
        max_start = cur_start;
    }
    if (max_start != -1) 
    {
        for (int i = 0; i < max_len; i++) 
        {
            printf("%c", line[max_start + i]);
        }
        printf("\n%d", max_len);
    }

    return 0;
}