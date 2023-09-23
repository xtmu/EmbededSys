#include <stdio.h>


int main()
{

    typedef struct Ptag
    {
        int x;
        int y;
        struct Ptag *next; // struct Ptag * 作为分量是合法的，PTag 可和 Point 同名
    } Point;

    Point p1, p2, p3, p4, p5;
    Point *p;
    p1.x = 10; p1.y = 1; p2.x = 20; p2.y = 2; p3.x = 30; p3.y = 3; p4.x = 40; p4.y = 4; p5.x = 50; p5.y = 5;

    p1.next = &p2; p2.next = &p3; p3.next = &p4; p4.next = &p5;
    p5.next = NULL;

    for (p = &p1; p != NULL; p = p->next)
    {
        printf("(%d, %d)\n", p->x, p->y);
    }

    return 0;
}
