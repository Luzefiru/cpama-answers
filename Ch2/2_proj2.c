#include <stdio.h>

#define SPHERE_RADIUS 10
#define PI 3.14159

int main(void)
{
    printf("Volume of a sphere with radius %d is equal to: %f\n",
    SPHERE_RADIUS, (4.0f / 3.0f) * PI * (SPHERE_RADIUS * SPHERE_RADIUS * SPHERE_RADIUS));

    return 0;
}