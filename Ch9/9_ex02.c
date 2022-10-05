#include <stdio.h>

/**
 * @brief returns 1 if both x & y fall between 0 and n-1, inclusive. otherwise, return 0.
 * 
 * @param {int} - any number
 * @param {int} - any number
 * @param {int} - the max limit of the range
 * @return int 
 */
int check(int x, int y, int n)
{
    return ((0 <= x && x <= n-1) && (0 <= y && y <= n-1)) ? 1 : 0;
}

int main(void)
{
    printf("Both numbers fall under the range? Answer: %d", check(1,2,3));
    return 0;
}