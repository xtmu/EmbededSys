#include <stdio.h>

int main()
{
    int i = 0;
    float j = 1;
    float sum = 0;
    for (i = 0; i < 20000000; i++)
    {
        sum += j;
    }

    printf("%f\n", sum);
}
