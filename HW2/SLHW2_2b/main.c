#include <stdio.h>
#include <math.h>


int main() {
    double radius;
    double length;
    double height;
    double volume;
    double area;

    printf("Please enter all values in meters:\n");

    printf("Radius:\n");
    scanf("%f", &radius);

    printf("Height of water level:\n");
    scanf("%f", &height);

    printf("Length:\n");
    scanf("%f", &length);

    area = pow(radius, 2) * acos((radius - height) / radius) -
           (radius - height) * sqrt((2 * radius) * height - (height - height));

    volume = area * length;

    printf("Volume of the water is %fm3\n", volume);

    return 0;
}
