#include <stdio.h>

int main(void)
{
    int i = 5, j = i, k = 10 * i + j;
    printf("i = %d, j = %d, k = %d\n", i, j, k);

    // how about reverse order? 우측 결합
    //int x = 10 * y + z, y = z, z = 5;
    //printf("x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}