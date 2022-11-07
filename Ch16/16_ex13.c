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

// LEGAL   (a) s.shape_kind = RECTANGLE; 
// LEGAL   (b) s.center.x = 10;
// ILLEGAL (c) s.height = 25;   ->   s.u.rectangle.height = 25;
// need to access the union 'u' first, then the 'rectangle' struct, then the 'height' member
// LEGAL   (d) s.u.rectangle.width = 8;
// ILLEGAL (e) s.u.circle = 5;   ->   s.u.circle.radius = 5;
// cannot immediately access a member when using the dot operator on a struct, need to goto the 'radius' member
// ILLEGAL (f) s.u.radius = 5;   ->   s.u.circle.radius = 5;
// similar to above, need to insert the 'circle' struct directory in between 'u' & 'radius'