#include <stdio.h>

int main(void)
{
    int i;
    float f;
    f = i = 33.3f;
    printf("f = %f, i = %d\n", f, i);

    int x = 1, y, z;
    z = 1 + (y = 1);  // hard to read. NOT GOOD!
    printf("%d %d %d\n", x, y, z);
    return 0;
}