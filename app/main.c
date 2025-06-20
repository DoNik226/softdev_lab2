#include <stdio.h>

#include "myfunc.h"
#include "equation.h"

int main()
{
    double root1, root2;
    int rootsCount;
    printf("Hello World!\n");
    rootsCount = equation(1, -1, 5, &root1, &root2);

    switch(rootsCount) {
    case 2:
        printf("Два действительных корня:\n");
        printf("x1 = %.2lf\n", root1);
        printf("x2 = %.2lf\n", root2);
        break;

    case 1:
        printf("Один действительный корень:\n");
        printf("x = %.2lf\n", root1);
        break;

    case 0:
        printf("Комплексные корни:\n");
        printf("x1 = %.2lf + %.2lfi\n", root1, root2);
        printf("x2 = %.2lf - %.2lfi\n", root1, root2);
        break;
    }
    return myfunc(2);
}
