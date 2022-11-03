/* implementation of an interpreter for Reverse Polish Notation calculator expressions using a stack data structure */

#include "stack.h"

int main(void)
{
    char inp;
    int r_operand, l_operand;

    loop:
    printf("Enter an RPN expression: ");
    {
        while (scanf(" %c", &inp), inp != '\n')
        {
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

    exit(EXIT_FAILURE);
}