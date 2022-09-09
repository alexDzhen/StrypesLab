#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    double currentNumber;
    double maxNum;

    maxNum = __DBL_MIN__;

    while (scanf("%lf", &currentNumber) != EOF) {
        if (currentNumber > maxNum) {
            maxNum = currentNumber;
        }
    }

    printf("MAX NUMBER is: %.3lf\n", maxNum);

    return 0;
}
