#include <stdio.h>

struct Point
{
    int x;
    int y;
};
int main()
{
    struct Point p = {
        .y = 25,
        .x = 120,
    };

    printf("%d %d", p.x, p.y);
    return 0;
}
