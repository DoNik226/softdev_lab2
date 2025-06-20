#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "equation.h"

int equation(double a, double b, double c, double *root1, double *root2) {
    double d = b * b - 4 * a * c;

    if (d > 0) {
        *root1 = (-b + sqrt(d)) / (2 * a);
        *root2 = (-b - sqrt(d)) / (2 * a);
        return 2;
    } else if (d == 0) {
        *root1 = -b / (2 * a);
        *root2 = 0;
        return 1;
    } else {
        *root1 = -b / (2 * a);     // Действительная часть
        *root2 = sqrt(-d) / (2 * a); // Мнимая часть
        return 0;
    }
}
