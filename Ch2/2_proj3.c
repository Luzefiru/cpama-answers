#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float sphere_radius;

    printf("What's the radius of your sphere? ");
    scanf("%f", &sphere_radius);

    printf("Volume of a sphere with radius %d is equal to: %f\n",
    sphere_radius, (4.0f / 3.0f) * PI * (sphere_radius * sphere_radius * sphere_radius));

    return 0;
}