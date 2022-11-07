#include <stdio.h>

union // max possible = 8 bytes, so occupies 8 bytes
{
    double a; // 8 bytes:
    struct // max possible: 8 bytes
    {
        char b[4];
        double c;
        int d;
    } e;
    char f[4]; // 4 bytes
} u;

// union 'u' occupies 8 bytes.