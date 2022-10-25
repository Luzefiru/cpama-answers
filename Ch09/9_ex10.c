/* write functions that get; largest element, average of all elements, number of positive elements - of an {int} array */

#include <stdio.h>

#define ARR_LEN 5 // you can change the array size here

int arr_max(int len, int arr[]);
float arr_avg(int len, int arr[]);
int arr_countPositive(int len, int arr[]);

int main(void)
{
    int a[ARR_LEN] = {1,2,-3,4,5};

    printf("Largest number in array: %d", arr_max(ARR_LEN, a));
    printf("\nAverage value of array: %.2f", arr_avg(ARR_LEN, a));
    printf("\nNumber of positive numbers: %d", arr_countPositive(ARR_LEN, a));

    return 0;
}

/**
 * @brief finds the largest value of an {int} array
 * 
 * @param len {int} - the length of the array
 * @param arr {int array} - the input array
 * @return {int} - the largest number of the ray
 */
int arr_max(int len, int arr[])
{
    int max_number = -1;

    for (int i = 0; i < len; i++)
    {
        if (max_number == -1) max_number = arr[i];
        else if (arr[i] > max_number) max_number = arr[i];
    }

    return max_number;
}

/**
 * @brief calculates the average value of an {int} array
 * 
 * @param len {int} - the length of the array
 * @param arr {int array} - the input array
 * @return {float} - the average value of all elements in the array
 */
float arr_avg(int len, int arr[])
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }

    return (float) sum / len;
}

/**
 * @brief counts the number of positive numbers of an {int} array
 * 
 * @param len {int} - the length of the array
 * @param arr {int array} - the input array
 * @return {int} - the number of positive numbers in the array
 */
int arr_countPositive(int len, int arr[])
{
    int count_positive = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > 0) count_positive++;
    }

    return count_positive;
}