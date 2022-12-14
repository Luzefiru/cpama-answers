#include <stdio.h>

struct complex {
    double real, imaginary;
};

struct complex make_complex(double real, double imaginary);
struct complex add_complex(struct complex c1, struct complex c2);

int main(void) // test program
{
    struct complex c1, c2, c3;

    c1 = make_complex(1.0, 0.0);
    c2 = make_complex(0.0, 1.0);
    c3 = add_complex(c1, c2);

    printf("%f %f", c3.real, c3.imaginary);
}

struct complex make_complex(double real, double imaginary)
{
    struct complex output = {real, imaginary};
    
    return output;
}

struct complex add_complex(struct complex c1, struct complex c2)
{
    struct complex output = {c1.real + c2.real, c1.imaginary + c2.imaginary};
    
    return output;
}