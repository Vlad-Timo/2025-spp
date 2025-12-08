#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    int n;
    scanf("%d", &n);

    Point points[100];

    double sum_x = 0.0;
    double sum_y = 0.0;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);

        sum_x += points[i].x;
        sum_y += points[i].y;
    }

    double center_x = sum_x / n;
    double center_y = sum_y / n;
    printf("%.10f %.10f\n", center_x, center_y);

    return 0;
}