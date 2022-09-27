/* prints a table of a number & its square, but it pauses every 24 squares and asks the user to enter before continuing */

#include <stdio.h>

int main(void)
{
    int n;

    printf("This program prints a number of squares.\nEnter number of entries in table: ");
    scanf("%d", &n); getchar(); // this reads the extra '\n' from the scanf

    for (int c = 1; c <= n; c++)
    {
        if (c % 24 == 0)
        {
            printf("Press Enter to continue... ");
            while (getchar() != '\n') // keeps asking for characters until the user inputs '\n'
                ;
        }  
        
        printf("%10d%10d\n", c, c * c);
    }

    return 0;
}