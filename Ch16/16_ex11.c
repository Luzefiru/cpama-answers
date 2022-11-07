#include <stdio.h>

struct
{
    double a;
    union
    {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} s;
