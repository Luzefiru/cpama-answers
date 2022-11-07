#include <stdio.h>

#define PI 3.142857

enum shape_kind {RECTANGLE, CIRCLE};

struct point
{
    int x, y;
};

struct shape
{
    int shape_kind;      /* RECTANGLE or CIRCLE */
    struct point center; /* coordinates of center */
    union
    {
        struct
        {
            int height, width;
        } rectangle;
        struct
        {
            int radius;
        } circle;
    } u;
} s;

double shape_computeArea(struct shape s);
struct shape shape_moveCenterPointByXandY(struct shape s, int x, int y);
struct shape shape_scaleShape(struct shape s, double scale);


int main(void)
{
    struct shape test_shape =
    {
        .shape_kind = RECTANGLE,
        .center = {.x = 0, .y = 0},
        .u.rectangle = {.height = 5, .width = 10}
    };

    printf("Area of test_shape: %lf\n", shape_computeArea(test_shape));

    printf("Old Center Coordinates of test_shape: (%d, %d)\n", test_shape.center.x, test_shape.center.y);
    test_shape = shape_moveCenterPointByXandY(test_shape, 5, 10);
    printf("New Center Coordinates of test_shape: (%d, %d)\n", test_shape.center.x, test_shape.center.y);

    printf("Old Area of test_shape: %lf\n", shape_computeArea(test_shape));
    test_shape = shape_scaleShape(test_shape, 1.5);
    printf("New Scaled Area of test_shape: %lf\n", shape_computeArea(test_shape));
}

double shape_computeArea(struct shape s)
{
    if (s.shape_kind == RECTANGLE)
    {
        return s.u.rectangle.height * s.u.rectangle.width;
    }

    if (s.shape_kind == CIRCLE)
    {
        return PI * (s.u.circle.radius * s.u.circle.radius);
    }
}

struct shape shape_moveCenterPointByXandY(struct shape s, int x, int y)
{
    struct shape output = s;

    output.center.x += x;
    output.center.y += y;

    return output;
}

struct shape shape_scaleShape(struct shape s, double scale)
{
    struct shape output = s;

    if (s.shape_kind == RECTANGLE)
    {
        output.u.rectangle.height *= scale;
        output.u.rectangle.width *= scale;
    }
    else if (s.shape_kind == CIRCLE)
    {
        output.u.circle.radius *= scale;
    }
    
    return output;
}