/* program that reads a 5x5 array of integers and prints row sums & column sums */

#include <stdio.h>

int main(void)
{
    int n, matrix[5][5] = {0};

    /* asks for each row & assigns the values to the matrix */
    for (int row = 0; row < 5; row++)
    {
        printf("Enter row %d (N N N N N): ", row + 1);
        
        for (int col = 0; col < 5; col++)
        {
            scanf(" %d", &n);
            matrix[row][col] = n;
        }
    }

    /* pretty prints the matrix */
    printf("\nMatrix:\n");
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            printf("%4d", matrix[row][col]);
        }
        printf("\n");
    }

    /* calculates & prints the row totals */
    int row_totals[5] = {};
    int row_sum;
    
    for (int row = 0; row < 5; row++)
    {
        row_sum = 0;

        for (int col = 0; col < 5; col++)
        {
            row_sum += matrix[row][col];
        }
        
        row_totals[row] = row_sum;
    }

    printf("\nRow totals: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", row_totals[i]);

    /* calculates & prints the column totals */
    int col_totals[5] = {};
    int col_sum;
    
    for (int col = 0; col < 5; col++)
    {
        col_sum = 0;

        for (int row = 0; row < 5; row++)
        {
            col_sum += matrix[row][col];
        }
        
        col_totals[col] = col_sum;
    }

    printf("\nColumn totals: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", col_totals[i]);

    return 0;
}       