/* create a program that uses a function to calculate the GPA of an inputted array */

#include <stdio.h>
#include <ctype.h>

float gpa(int, char [*]);

int main(void)
{
    int arr_len;
    printf("Input number of grades: ");
    scanf("%d", &arr_len);

    while ((getchar()) != '\n') ; // flushes input buffer

    printf("Input letter grades, delimited by a space: ");
    char ch, grades[arr_len];
    for (int i = 0; i < arr_len; (isalpha(ch)) ? i++ : i)
    {
        ch = getchar();
        if (isalpha(ch)) grades[i] = toupper(ch);
    }

    printf("Grades: ");
    for (int i = 0; i < arr_len; i++)
        printf("%c", grades[i]);

    printf("\nGPA: %f", gpa(arr_len, grades));

}

/**
 * @brief calculates the average GPA of an array of {char} letter grades
 * 
 * @param arr_len {int} : length of the array
 * @param arr {char array} : array of letter grades with valid values; A, B, C, D, F
 * @return {float} : average GPA of converted letter grades
 */
float gpa(int arr_len, char arr[])
{
    int sum = 0;

    for (int i = 0; i < arr_len; i++)
    {
        switch (arr[i])
        {
            case 'A': sum += 4; break;
            case 'B': sum += 3; break;
            case 'C': sum += 2; break;
            case 'D': sum += 1; break;
            case 'F': sum += 0; break;
        }
    }

    
    return (float) sum / arr_len;
}