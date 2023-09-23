#include <stdio.h>

int main()
{

    // struct
    // {
    //     int x;
    //     int y;
    // } point;

    // struct Point //Point是结构体标签
    // {
    //     int x;
    //     int y;
    // };
    // struct Point point;

    // struct Point
    // {
    //     int x;
    //     int y
    // };
    // struct Point point, point2; // Point 结构体标签

    typedef struct
    {
        int x;
        int y;
    } Point;
    Point point;

    point.x = 2;
    point.y = 3;
    printf("%d,%d", point.x, point.y);

    return 0;
}
