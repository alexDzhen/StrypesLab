#include <stdio.h>

int rectangle(double w, double h, double *P, double *S) {
    if ((w <= 0) || (h <= 0)) {
        return -1;
    } else {
        *P = (2 * w) + (2 * h);
        *S = w * h;
        return 0;
    }
}

int main() {
    double w, h, S, P;
    printf("Please enter valid sides of your rectangle!\n");
    while ((scanf("%lf %lf", &w, &h)) != EOF) {
        int result = rectangle(w, h, &P, &S);
        if (result == -1) {
            printf("Invalid sides!");
        } else {
            printf("P = %.2lf\n", P);
            printf("S = %.2lf\n", S);
        }
    }
    return 0;
}
