#include <stdio.h>

int main(void)
{
    enum {NUL, SOH, STX, ETX};
    // 0 1 2 3
    printf("%d %d %d %d\n", NUL, SOH, STX, ETX);

    enum {VT = 11, FF, CR};
    // 11 12 13
    printf("%d %d %d\n", VT, FF, CR);

    enum {SO = 14, SI, DLE, CAN = 24, EM};
    // 14 15 16 24 25
    printf("%d %d %d %d %d\n", SO, SI, DLE, CAN, EM);

    enum {ENQ = 45, ACK, BEL, LF = 37, ETB, ESC};
    // 45 46 47 37 38 39
    printf("%d %d %d %d %d %d", ENQ, ACK, BEL, LF, ETB, ESC);
}