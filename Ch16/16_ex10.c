#include <stdio.h>
#include <stdbool.h>
#include <math.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int rectangle_CalculateArea(struct rectangle r);
struct point rectangle_findMiddlePoint(struct rectangle r);
struct rectangle rectangle_moveByXandByY(struct rectangle r, int x, int y);
bool checkIfPointExistsInRectangle(struct rectangle r, struct point p);

int main(void) // test program
{
    struct rectangle test_rectangle = {{10, 20}, {-20, -20}};

    printf("Area = %d\n", rectangle_CalculateArea(test_rectangle));

    struct point middle = rectangle_findMiddlePoint(test_rectangle);
    printf("Middle = (%d, %d)\n", middle.x, middle.y);

    test_rectangle = rectangle_moveByXandByY(test_rectangle, 10, 10);
    printf("Area = %d\n", rectangle_CalculateArea(test_rectangle));
    middle = rectangle_findMiddlePoint(test_rectangle);
    printf("Middle = (%d, %d)\n", middle.x, middle.y);

    printf("\n%d", checkIfPointExistsInRectangle(test_rectangle, (struct point){10, -20}));
    printf("\n%d", checkIfPointExistsInRectangle(test_rectangle, (struct point){20, -10}));
}

int rectangle_CalculateArea(struct rectangle r)
{
    return // A = L (distance of x) * W (distance of y)
        ( (abs(r.upper_left.x) + abs(r.lower_right.x)) * (abs(r.upper_left.y) + abs(r.lower_right.y)) );
}

struct point rectangle_findMiddlePoint(struct rectangle r)
{
    return // (x,y) = (x2 + x1)/2, (y2+y1)/2
        (struct point){(r.lower_right.x + r.upper_left.x)/2, (r.lower_right.y + r.upper_left.y)/2};
}

struct rectangle rectangle_moveByXandByY(struct rectangle r, int x, int y)
{
    struct rectangle output = r;

    output.lower_right.x += x;
    output.upper_left.x += x;

    output.lower_right.y += y;
    output.upper_left.y += y;

    return output;
}

bool checkIfPointExistsInRectangle(struct rectangle r, struct point p)
{
    if ( p.x >= r.lower_right.x && p.x <= r.upper_left.x && p.y >= r.lower_right.y && p.y <= r.upper_left.x )
        return true;
    else
        return false;
}