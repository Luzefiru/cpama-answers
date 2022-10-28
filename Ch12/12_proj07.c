#include <stdio.h>

#define ARR_LEN 10

void max_min(int [], int, int *, int *);

int main(void)
{
    int arr[ARR_LEN] = {0}, max_num, min_num;

    printf("Enter %d numbers: ", ARR_LEN);
    for (int i = 0; i < ARR_LEN; i++)
    {
        scanf("%d", &arr[i]);
    }

    max_min(arr, ARR_LEN, &max_num, &min_num);

    printf("\nLargest: %d\nSmallest: %d", max_num, min_num);

    return 0;
}

void max_min(int arr[], int N, int *max, int *min)
{
    for (int *p = arr; p < arr + N; p++)
    {
        
        if (p == arr)
            *max = *min = *p;
            
        if (*p > *max)
            *max = *p;
        else if (*p < *min)
            *min = *p;
    }

    return;
}
