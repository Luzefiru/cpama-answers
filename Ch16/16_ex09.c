#include <stdio.h>
#include <stdbool.h>

struct color
{
    int red;
    int green;
    int blue;
};

int getRed(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(void) // test program
{
    struct color magenta = {.red = 255, .blue = 255};
    struct color green = {.green = 255};

    printf("%d\n", getRed(magenta));
    printf("%d\n", equal_color(magenta, green));

    green = brighter(green);
    printf("%d\n", getRed(green));

    magenta = darker(magenta);
    printf("%d\n", getRed(magenta));
}

int getRed(struct color c)
{
    return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
    if (color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue)
        return true;
    else
        return false;
}

struct color brighter(struct color c)
{
    struct color output;

    if (c.red == 0 && c.green == 0 && c.blue == 0)
        return (struct color){3, 3, 3};

    if (c.red < 3)
        c.red = 3;
    if (c.green < 3)
        c.green = 3;
    if (c.blue < 3)
        c.blue = 3;

    output = (struct color){c.red / 0.7, c.green / 0.7, c.blue / 0.7};

    if (output.red > 255)
        output.red = 255;
    if (output.green > 255)
        output.green = 255;
    if (output.blue > 255)
        output.blue = 255;

    return output;
}

struct color darker(struct color c)
{
    return (struct color){c.red * 0.7, c.green * 0.7, c.blue * 0.7};
}