#include <stdio.h>
#include <math.h>

int quadEq(double a, double b, double c, double *x1, double *x2) {
    double desc = (pow(b, 2)) - (4 * a * c);
    if (desc < 0) {
        return -1;
    } else if (desc == 0) {
        *x1 = -b / (2 * a);
        *x2 = -b / (2 * a);
        return 1;
    } else {
        *x1 = (-b + sqrt(desc)) / (2 * a);
        *x2 = (-b - sqrt(desc)) / (2 * a);
        return 0;
    }
}

int main() {
    double a, b, c, x1, x2;
    printf("Please enter a, b, c!\n");
    while (scanf("%lf %lf %lf", &a, &b, &c)) {
        int result = quadEq(a, b, c, &x1, &x2);
        if (result == -1) {
            printf("No real roots");
        } else if (result == 1) {
            printf("x1 = x2 = %.2lf\n", x1);
        } else {
            printf("x1 = %.2lf\nx2 = %.2lf\n", x1, x2);
        }
    }
    return 0;
}
