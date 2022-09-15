/* converts grade to numerical grade using switch statements */

#include <stdio.h>

int main(void)
{
    int num, tens, ones;

    printf("Enter numerical grade: ");
    scanf("%d", &num);

    // catches grades out of range
    if (num < 0 || num > 100)
    {
        printf("Error: grade is out of range.");
        return 0;
    }

    // breaks the number into tens & ones digits.
    tens = num/10; ones = num % 10;

    // uses switch case to print letter grade
    printf("Letter grade: ");
    switch (tens)
    {
        case 10: case 9: printf("A"); break;
        case 8: printf("B"); break;
        case 7: printf("C"); break;
        case 6: printf("D"); break;
        default: printf("F"); break;

    }

    return 0;

}