#include <stdio.h>
#include <math.h>

double volumeCylinder(double radius, double height) {
    double volume = (22 * pow(radius, 2) * height) / 7;
    return volume;
}

int main(int argc, char const *argv[]) {

    double volume;
    double radius;
    double height;

    printf("Please enter the values in meters of:\n");

    printf("Radius:\n");
    scanf("%f", &radius);

    printf("Height:\n");
    scanf("%f", &height);

    volume = volumeCylinder(radius, height);

    printf("Volume of cylinder in cubic meters is: %.3f\n", volume);

    return 0;
}
