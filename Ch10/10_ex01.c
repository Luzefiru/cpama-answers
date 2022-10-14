#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
char top = 0;
bool underflow_flag = false;
bool nested_flag = true;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char inp;

    /* reads each character until the newline */
    printf("Enter parentheses and/or braces: ");
    while ((inp = getchar()) != '\n')
    {
        switch (inp)
        {
            case '(': case '{':
                push(inp); break;
            case ')':
                if (pop() != '(')
                    nested_flag = false; break;
            case '}':
                if (pop() != '{')
                    nested_flag = false; break;
        }
    }

    /* if stack is not empty OR any mismatch occured OR the stack underflowed (there are extra braces) */
    if (!is_empty() || !nested_flag || underflow_flag)
    {
        printf("Parentheses/braces are NOT nested properly\nERROR: ");
        (!is_empty() || !nested_flag) ? printf("Brace mismatch") : printf("Stack underflow");
    }
    /* otherwise, the braces are nested properly */
    else if (is_empty())
    {
        printf("Parentheses/braces are nested properly");
    }

    return 0;
}

// resets the stack
void make_empty(void)
{
    top = 0;
}

// checks if the first index is empty
bool is_empty(void)
{
    return top == 0; 
}

// checks if the top is the stack limit
bool is_full(void)
{
    return top == STACK_SIZE; 
}

// adds an element to the rightmost side of the stack
void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i; 
}

// removes an element from the rightmost side of the stack
char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

// raises stack overflow error and terminates the program 
void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

// raises underflow flag
void stack_underflow(void)
{
    underflow_flag = true;
}