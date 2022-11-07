#include <stdio.h>

struct
{
    double a; // 8 bytes
    union // 8 bytes
    {
        char b[4];
        double c;
        int d;
    } e;
    char f[4]; // 4 bytes
} s;

// s occupies 20 bytes.