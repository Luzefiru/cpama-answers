/* program that reduces an inputted fraction to lowest terms using Euclidean's Algorithm */

#include <stdio.h>

int fractionGCD(int n, int d);
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numerator, denominator, reduced_numerator, reduced_denominator;

    // asks for the fraction input in the form (n/d)
    printf("Enter a fraction (n/d): ");
    scanf("%d/%d", &numerator, &denominator);

    // reduces the numerator & denominator and stores it
    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    // displays the fraction in lowest terms
    printf("In lowest terms: %d/%d", reduced_numerator, reduced_denominator);

    return 0;
}

/**
 * @brief Finds the GCD of a fraction of integers.
 * 
 * @param n {int} : the numerator of the fraction
 * @param d {int} : the denominator of the fraction
 * @return {int} : the GCD of the fraction
 */
int fractionGCD(int n, int d)
{
    // initializes variable for remainder to be used in Euclidean's Algorithm
    int r;

    // executes Euclidean's Algorithm
    while (n != 0)
    {
        r = d % n;
        d = n;
        n = r;
    }

    // returns the GCD
    return d;

}

/**
 * @brief Reduces the numerator & denominator of a fraction in lowest terms according to their GCD.
 * 
 * @param numerator {int} : the numerator of the fraction
 * @param denominator {int} : the denominator of the fraction
 * @param reduced_numerator {*int} : the variable to store the reduced numerator
 * @param reduced_denominator {*int} : the variable to store the reduced denominator
 */
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{   
    int gcd = fractionGCD(numerator, denominator);
    *reduced_numerator = numerator / gcd;
    *reduced_denominator = denominator / gcd;
}