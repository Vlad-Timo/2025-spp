#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

double distance(Point a, Point b) {
    long long dx = a.x - b.x;
    long long dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    int n;
    scanf("%d", &n);

    Point points[100];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    double max_perimeter = 0.0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) 
            {
                double a = distance(points[i], points[j]);
                double b = distance(points[i], points[k]);
                double c = distance(points[j], points[k]);

                double perimeter = a + b + c;

                if (perimeter > max_perimeter) {
                    max_perimeter = perimeter;
                }
            }
        }
    }

    printf("%.15g\n", max_perimeter);

    return 0;
}