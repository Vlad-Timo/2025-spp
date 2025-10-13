#include <cstdio>
#include <cmath>

int main(int argc, char** argv)
{
    char x1 = 0;
    char y1 = 0;
    char x2 = 0;
    char y2 = 0;
    scanf("%c%c %c%c", &x1, &y1, &x2, &y2);

    if (x1 == x2 && y2 > y1 && (y2 - y1 == 1 || (y1 == '1' && y2 == '3')))
    {
        printf("Pawn");
    }
    else if ((abs(x2 - x1) == 1 && abs(y2 - y1) == 2) || (abs(x2 - x1) == 2 && abs(y2 - y1) == 1))
    {
        printf("Knight");
    }
    else if (abs(x2 - x1) == abs(y2 - y1) && abs(x2 - x1) > 0)
    {
        printf("Bishop");
    }
    else if ((x1 == x2 && abs(y2 - y1) > 0) || (y1 == y2 && abs(x2 - x1) > 0))
    {
        printf("Rook");
    }
    else if ((abs(x2 - x1) == abs(y2 - y1)) || (x1 == x2) || (y1 == y2))
    {
        printf("Queen");
    }
    else if (abs(x2 - x1) <= 1 && abs(y2 - y1) <= 1)
    {
        printf("King");
    }
    else
    {
        printf("Nobody");
    }

    return 0;
}