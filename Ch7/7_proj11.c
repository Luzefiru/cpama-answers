/* takes an inputted first name & last name, then displays it in this format: "lastName, firstNameInitial." */

#include <stdio.h>

int main(void)
{
    char ch, fn_initial;

    printf("Enter a first and last name (firstName lastName): ");
    scanf("%c", &fn_initial); // saves the firstNameInitial

    while (ch = getchar(), ch != ' ') // ignores all characters up until the space between the first & last names
        ;

    while (ch = getchar(), ch != '\n') // prints out all characters of the last name first
        printf("%c", ch);
    
    printf(", %c.", fn_initial); // appends the ", {fn_initial}." to the last name

    return 0;
}