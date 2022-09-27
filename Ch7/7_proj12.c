/* evaluates a user inputted expression, ignoring PEMDAS, from left to right */

#include <stdio.h>

int main(void)
{
    float n1, n2, value;
    char connector;

    printf("Enter an expression: ");
    scanf("%f%c", &n1, &connector); // picks up n1 & the connector for now, saving the others in the input buffer

    while (connector != '\n') // loops until the expression reaches a '\n' connector
    {
        scanf("%f", &n2);  // picks up n2 to do calculations with the connector
        
        switch (connector)
        {
            case '+': value = n1 + n2; break;
            case '-': value = n1 - n2; break;
            case '*': value = n1 * n2; break;
            case '/': value = n1 / n2; break;
        }

        scanf("%c", &connector); // picks up the next connector from the input buffer
        n1 = value; // makes n1 the value resulted from the old n1 & n2
    }
    
    printf("Value of expression: %.2f", value);
}