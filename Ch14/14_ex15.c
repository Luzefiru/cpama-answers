#include <stdio.h>

#define FRENCH // ENGLISH, SPANISH & FRENCH are the options

int main(void)
{
#ifdef ENGLISH
   printf("Insert Disk 1");
#elif defined(SPANISH)
   printf("Inserte El Disco 1");
#elif defined(FRENCH)
    printf("Inserez Le Disque 1");
#endif
}