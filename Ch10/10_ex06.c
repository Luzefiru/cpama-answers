/* implementation of an interpreter for Reverse Polish Notation calculator expressions using a stack data structure */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;
bool flag_underflow = false, flag_overflow = false;

bool is_empty(void);
bool is_full(void);
int push(int i);
int pop(void);
void make_empty(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char inp;
    int r_operand, l_operand;

    loop:
    printf("Enter an RPN expression: ");
    {
        while (scanf(" %c", &inp), inp != '\n')
        {
            // printf("top element = %d, index = %d\n ", contents[top-1], top-1);
            if (isdigit(inp))
            {
                push(inp - '0'); // pushes the integer into the stack
            }
            else
            {
                switch (inp)
                {
                    case '+':
                        r_operand = pop(), l_operand = pop();
                        push(l_operand + r_operand);
                        break;
                    case '-':
                        r_operand = pop(), l_operand = pop();
                        push(l_operand - r_operand);
                        break;
                    case '*':
                        r_operand = pop(), l_operand = pop();
                        push(l_operand * r_operand);
                        break;
                    case '/':
                        r_operand = pop(), l_operand = pop();
                        push(l_operand / r_operand);
                        break;
                    case '=':
                        printf("Value of expression: %d\n", contents[top - 1]);
                        make_empty();
                        goto loop;
                    default:
                        exit(EXIT_SUCCESS);
                }
            }
        }
        
        return 0;
    }

    return 0;
}

/* checks if the stack is empty */
bool is_empty(void)
{
    return top == 0;
}

/* checks if the stack is full */
bool is_full(void)
{
    return top == STACK_SIZE;
}

/*
 * if the stack if full, then raise an overflow error
 * : otherwise set {ch} to the top & increment top index
 */
int push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

/*
 * if the stack if empty, then raise an underflow error
 * : otherwise return the element at the top index & decrement top index
 */
int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

/* clears the stack */
void make_empty(void)
{
    top = 0;
}

/* raises overflow flag */
void stack_overflow(void)
{
    flag_overflow = true;
    printf("ERROR: Expression is too complex");
    exit(EXIT_FAILURE);
}

/* raises underflow flag */
void stack_underflow(void)
{
    flag_underflow = true;
    printf("ERROR: Not enough operands in expression");
    exit(EXIT_FAILURE);
}