#include <stdio.h>

union // max possible = 16 bytes, so occupies 16 bytes
{
    double a; // 8 bytes:
    struct // total bytes allocated = 16 bytes
    {
        char b[4];
        double c;
        int d;
    } e;
    char f[4]; // 4 bytes
} u;

// union 'u' occupies 16 bytes.