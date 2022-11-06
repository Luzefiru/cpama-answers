#include <stdio.h>

struct fraction
{
    int numerator, denominator;
};

struct fraction reduceToLowestTerms(struct fraction f);
struct fraction addFractions(struct fraction f1, struct fraction f2);
struct fraction subtractFractions(struct fraction f1, struct fraction f2);
struct fraction multiplyFractions(struct fraction f1, struct fraction f2);
struct fraction divideFractions(struct fraction f1, struct fraction f2);

int main(void)
{
    struct fraction test_frac1 = {2, 8}, test_frac2 = {8, 12}, result_frac;

    result_frac = addFractions(test_frac1, test_frac2);
    printf("%d/%d\n", result_frac.numerator, result_frac.denominator);

    result_frac = subtractFractions(test_frac1, test_frac2);
    printf("%d/%d\n", result_frac.numerator, result_frac.denominator);

    result_frac = multiplyFractions(test_frac1, test_frac2);
    printf("%d/%d\n", result_frac.numerator, result_frac.denominator);

    test_frac1 = (struct fraction){10, 6};
    test_frac2 = (struct fraction){5, 2};

    result_frac = divideFractions(test_frac1, test_frac2);
    printf("%d/%d\n", result_frac.numerator, result_frac.denominator);
}

struct fraction reduceToLowestTerms(struct fraction f)
{
    int a = f.numerator;
    int b = f.denominator;
    int r;

    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    } 

    while (r != 0)
    {
        r = a % b;
        if (r == 0) break;

        a = b;
        b = r;
    }

    int gcf = b;
    struct fraction output = {f.numerator / gcf, f.denominator / gcf};

    return output;
}

struct fraction addFractions(struct fraction f1, struct fraction f2)
{
    struct fraction output;

    output = reduceToLowestTerms((struct fraction){f1.numerator + f2.numerator, f1.denominator + f2.denominator});

    return output;
}

struct fraction subtractFractions(struct fraction f1, struct fraction f2)
{
    struct fraction output;

    output = reduceToLowestTerms((struct fraction){f2.numerator - f1.numerator, f2.denominator - f1.denominator});

    return output;
}

struct fraction multiplyFractions(struct fraction f1, struct fraction f2)
{
    struct fraction output;

    output = reduceToLowestTerms((struct fraction){f1.numerator * f2.numerator, f1.denominator * f2.denominator});

    return output;
}

struct fraction divideFractions(struct fraction f1, struct fraction f2)
{
    struct fraction output;

    output = reduceToLowestTerms((struct fraction){f1.numerator / f2.numerator, f1.denominator / f2.denominator});

    return output;
}