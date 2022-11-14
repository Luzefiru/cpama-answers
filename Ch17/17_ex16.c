/*
Write the ff function:

int sum(int (*f)(int), int start, int end);

The call "sum(g, i, j)" should return g(i) + ... + g(j).
*/

#include <stdio.h>

int sum(int (*f)(int), int start, int end);
int add(int n); // function to be passed in the 'sum' function

int main(void) // test program
{
    printf("%d", sum(add, 0, 2)); // should perform: 1 + 2 + 3
}

int sum(int (*f)(int), int start, int end)
{
    int sum = 0;

    for (int i = start; i <= end; i++)
    {
        sum += f(i);
    }

    return sum;
}

int add(int n)
{
    return n + 1;
}