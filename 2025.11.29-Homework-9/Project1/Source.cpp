#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

long long distance_squared(Point p)
{
    return (long long)p.x * p.x + (long long)p.y * p.y;
}

int main()
{
    int n;

    scanf("%d", &n);

    Point points[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    int max_index = 0;
    long long max_distance = distance_squared(points[0]);

    for (int i = 1; i < n; i++)
    {
        long long current_distance = distance_squared(points[i]);
        if (current_distance > max_distance)
        {
            max_distance = current_distance;
            max_index = i;
        }
    }

    printf("%d %d\n", points[max_index].x, points[max_index].y);

    return 0;
}