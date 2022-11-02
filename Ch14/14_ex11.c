#include <stdio.h>

#define ERROR(x, ...) fprintf(stderr, (x), __VA_ARGS__);

int main(void) // test program
{
    int index = 2;
    ERROR("Range error: index = %d\n", index);
}