#include <stdio.h>

int main(void)
{
    // (a) An enumeration constant may represent any integer specified by the programmer.
    // True. We can do the ff:
    enum {ONE = 1, TWO = 2, THREE = 3};
    printf("%d %d %d\n", ONE, TWO, THREE);

    // (b) Enumeration constants have exactly the same properties as constants created using #define.
    // False. They have block scope and not file scope like #define.

    // (c) Enumeration constants have the values 0, 1, 2, ... by default.
    // True. Observe the ff:
    enum {ONE2, TWO2, THREE2};
    printf("%d %d %d\n", ONE2, TWO2, THREE2);

    // (d) All constants in an enumeration must have different values.
    // False, Enumeration Constants can have same values as one another.
    enum {ONE3 = 3, TWO3 = 3, THREE3 = 3};
    printf("%d %d %d\n", ONE3, TWO3, THREE3);

    // (e) Enumeration constants may be used as integers in expressions.
    // True, they act like #define Macros in that way.
    printf("%d\n", ONE3 + TWO3 + THREE3 + 1);
}