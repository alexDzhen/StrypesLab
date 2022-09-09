#include <stdio.h>

int main() {
    float weight;
    float height;
    float bmi;

    printf("Please enter\n");

    printf("Your weight in kilograms:\n");
    scanf("%f", &weight);

    printf("Your height in meters:\n");
    scanf("%f", &height);

    bmi = weight / (height * height);
    printf("Your BMI is: %f\n", bmi);

    return 0;
}
