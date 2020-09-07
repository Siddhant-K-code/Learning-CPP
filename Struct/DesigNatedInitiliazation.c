#include <stdio.h>

struct Point
{
    int x;
    int y;
};
int main()
{
    
    // will not work for C++, we have to initialize in order in C++
    struct Point p = {
        .y = 25, 
        .x = 120,
    };

    printf("%d %d", p.x, p.y);
    return 0;
}
