int *f(int); // return a pointer to arrays instead of returning 

int (*g(int))(int) // returns a pointer to a function that takes in an int instead of the function itself

int (*a[10])(int); // a is a 10 element array of functions that take in an int argument