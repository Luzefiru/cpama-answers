#include <stdio.h>

typedef struct {
    double real, imaginary;
} Complex;

Complex make_complex(double real, double imaginary);
Complex add_complex(Complex c1, Complex c2);

int main(void) // test program
{
    Complex c1, c2, c3;

    c1 = make_complex(1.0, 0.0);
    c2 = make_complex(0.0, 1.0);
    c3 = add_complex(c1, c2);

    printf("%f %f", c3.real, c3.imaginary);
}

Complex make_complex(double real, double imaginary)
{
    Complex output = {real, imaginary};
    
    return output;
}

Complex add_complex(Complex c1, Complex c2)
{
    Complex output = {c1.real + c2.real, c1.imaginary + c2.imaginary};
    
    return output;
}