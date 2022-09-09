#include <stdio.h>
#include <math.h>

int main() {
    float weight;
    float height;
    float bmi;

    printf("Please enter\n");

    printf("Your weight in kilograms:\n");
    scanf("%f", &weight);

    printf("Your height in meters:\n");
    scanf("%f", &height);

    bmi =1.3f * (weight / powf(height, 2.5));
    printf("Your BMI is: %f\n", bmi);

    return 0;
}
