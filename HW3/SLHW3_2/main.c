#include <stdio.h>
#include <math.h>

int triangle(double a, double b, double c, double *P, double *S) {
    double half;
    if ((a <= 0) || (b <= 0) || (c <= 0)) {
        return -1;
    } else if ((a > (b + c)) || (b > (a + c)) || (c > (a + b))) {
        return -1;
    } else {
        *P = a + b + c;
        half = *P / 2;
        *S = sqrt(half * (half - a) * (half - b) * (half - c));
    }
}

int main() {
    int checkEOF;
    double a, b, c, P, S;
    printf("Please enter valid side a, b, c of the triangle.\n");
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
        int result = triangle(a, b, c, &P, &S);
        if (result == -1) {
            printf("Invalid triangle sides!");
        } else {
            printf("P = %.2lf\n", P);
            printf("S = %.2lf\n", S);
        }
    }
    return 0;
}
