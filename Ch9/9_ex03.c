/**
 * @brief finds the greatest common divisor of two inputted numbers using Euclid's algorithm
 * 
 * @param n {int} - a number
 * @param m {int} - another number
 * @return {int} - the GCD of both numbers
 */
int gcd(int n, int m)
{
    int r;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}