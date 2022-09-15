/* asks user for wind speed (in knots) as input to display correct description according to Beaufort Scale */

#include <stdio.h>

int main(void)
{
    float speed;

    printf("Input wind speed (in knots): ");
    scanf("%f", &speed);

    // prints description according to range of wind speed
    printf("Description of Wind Speed: ");
    if (speed < 1.0f)
    {
        printf("Calm");
    }
    else if (speed < 4.0f)
    {
        printf("Light air");
    }
    else if (speed < 28.0f)
    {
        printf("Breeze");
    }
    else if (speed < 48.0f)
    {
        printf("Gale");
    }
    else if (speed <= 63.0f)
    {
        printf("Storm");
    }
    else
    {
        printf("Hurricane");
    }

    return 0;
}