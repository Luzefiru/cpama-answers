/*
Assume that we want p to point to a rectangle structure whose;
upper left corner is at (10, 25) and whose lower right corner is at (20, 15).

Write a series of statements that allocate such a structure and initialize it as indicated.
*/

#include <stdio.h>
#include <stdlib.h>

struct point {int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int main(void)
{
    struct rectangle *p;
    p = calloc(1, sizeof(struct rectangle));

    p->upper_left = (struct point){10,25};
    p->lower_right = (struct point){20,15};

    printf("(%d, %d) (%d, %d)",
        p->upper_left.x, p->upper_left.y,
        p->lower_right.x, p->lower_right.y);
}