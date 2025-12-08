#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} Point;

int main() 
{
    int n;
    scanf("%d", &n);

    Point points[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    long long max_sq = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            long long dx = points[i].x - points[j].x;
            long long dy = points[i].y - points[j].y;
            long long dist_sq = dx * dx + dy * dy;

            if (dist_sq > max_sq) 
            {
                max_sq = dist_sq;
            }
        }
    }

    printf("%.6f\n", sqrt(max_sq));
    return 0;
}