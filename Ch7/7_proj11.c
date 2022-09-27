/*
takes an inputted first name & last name, then displays it in this format: "lastName, firstNameInitial."
ignores spaces before the first name, in between both names, and after last name.
*/

#include <stdio.h>

int main(void)
{
    char ch, fn_initial;

    printf("Enter a first and last name (firstName lastName): ");
    
    while (ch = getchar(), ch == ' ') ; // strips all spaces before characters

    fn_initial = ch; // saves the first name initial

    while (ch = getchar(), ch != ' ') ; // strips all letters
    while (ch = getchar(), ch == ' ') ; // strips all spaces

    printf("%c", ch); // prints the first letter of the last name

    while (ch = getchar(), ch != '\n' && ch != ' ') // prints the rest of the last name, ignoring extra spaces
        printf("%c", ch);
    
    printf(", %c.", fn_initial); // appends the ", {fn_initial}." to the last name

    return 0;
}

