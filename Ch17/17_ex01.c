#include <stdlib.h>
#include <stdio.h>

void *my_malloc(size_t);

int main(void) // test program
{
    int *arr;
    arr = my_malloc(sizeof(int) * 2); // 2 elements allocation
    arr[0] = 6, arr[1] = 9;
    printf("%d %d\n", arr[0], arr[1]);

    free(arr);

    arr = my_malloc(sizeof(int) * 10000000000); // too much memory
    printf("%d %d\n", arr[0], arr[1]); // does not reach
}

/* wrapper for malloc() that allocates {size} bytes and checks if successful */
void *my_malloc(size_t size)
{
    void *output = malloc(size);
    if (output == NULL)
    {
        puts("malloc() unsuccessful, terminating program...");
        exit(EXIT_FAILURE);
    }
    else
        return output;
}