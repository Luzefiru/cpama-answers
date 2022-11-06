#include <stdio.h>

// // a
// struct {
//     double real, imaginary;
// } c1, c2, c3;

// // b
// struct {
//     double real, imaginary;
// } c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

// // c
// int main(void)
// {
//     c1 = c2; 
//     printf("%f %f", c1.real, c1.imaginary);
// }

// // d
// int main(void)
// {
//     c3.real = c1.real + c2.real;
//     c3.imaginary = c1.imaginary + c2.imaginary;
//     printf("%f %f", c3.real, c3.imaginary);
// }