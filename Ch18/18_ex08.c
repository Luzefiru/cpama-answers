char (*x[10])(int);
// an array of 10 function pointers that take in an int as an argument and return a char
int (*x(int))[5];
// x is a function that returns an array to 5 integers
float *(*x(void))(int);
// x is a function that takes in no arguments and returns a pointer to a function that takes in an int argument and returns a float pointer
void (*x(int, void (*y)(int)))(int);
// x is a function that takes in an int & a void function that takes an int argument and returns nothing.
// x returns a pointer to a pointer to a function that takes in an int argument and returns nothing.