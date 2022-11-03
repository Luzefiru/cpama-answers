#include "stack.h"

int contents[STACK_SIZE];
int top = 0;
bool flag_underflow = false, flag_overflow = false;

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