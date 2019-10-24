#include <stdio.h>

int main(void)
{
    int A = 8;
    float B = 3.14f;
    // 형식지정자 d or f ? 다른 것으로 강제로 선택하려면?
    printf("A + B = % \n", A + B); 
    return 0;
}