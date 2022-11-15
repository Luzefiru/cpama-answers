#define PI 3.14159

char c = 65; // legal
static int i = 5, j = i * i; // illegal because static variables need constant definitions
double d = 2 * PI; // legal
double angles[] = {0, PI/2, PI, 3 * PI/2}; // legal