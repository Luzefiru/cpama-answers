#include <stdio.h>

int main(int argc, char **argv)
{
    for (int i = argc; --i > 0;)
        printf("%s ", argv[i]);

    return 0;
}