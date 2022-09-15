/* calculates tax due according to user inputted taxable income */

#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Input your taxable income (in USD): ");
    scanf("%f", &income);

    // calculates tax due according to income brackets
    if (income < 750.0f)
    {
        tax = income * 0.01f;
    }
    else if (income < 2250.0f)
    {
        tax = 7.5f + (income - 750.0f) * 0.02f;
    }
    else if (income < 3750.0f)
    {
        tax = 37.5f + (income - 2250.0f) * 0.03f;
    }
    else if (income < 5250.0f)
    {
        tax = 82.5f + (income - 3750.0f) * 0.04f;
    }
    else if (income <= 7000.0f)
    {
        tax = 142.5f + (income - 5250.0f) * 0.05f;
    }
    else
    {
        tax = 230.0f + (income - 7000.0f) * 0.06f;
    }

    // prints out the tax due
    printf("Tax due: %.4f USD", tax);
}