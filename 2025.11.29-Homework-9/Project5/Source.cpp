#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double sum_math = 0, sum_physics = 0, sum_informatics = 0;

    for (int i = 0; i < n; i++) {
        char firstName[50], lastName[50];
        int math, physics, informatics;

        scanf("%s %s %d %d %d",
            lastName, firstName,
            &math, &physics, &informatics);

        sum_math += math;
        sum_physics += physics;
        sum_informatics += informatics;
    }

    double avg_math = sum_math / n;
    double avg_physics = sum_physics / n;
    double avg_informatics = sum_informatics / n;

    printf("%g %g %g\n", avg_math, avg_physics, avg_informatics);

    return 0;
}