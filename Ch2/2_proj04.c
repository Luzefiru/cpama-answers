#include <stdio.h>

#define TAX_RATE 1.05

int main(void)
{
    float dollar_and_cents;
    
    printf("Enter an amount: ");
    scanf("%f", &dollar_and_cents);

    printf("With tax added: %.2f",
    dollar_and_cents * TAX_RATE);

    return 0;
}