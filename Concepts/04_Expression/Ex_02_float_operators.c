#include <stdio.h>

int main(void)
{
    float A = 8.4f, B = 0.2f;
    printf("A / B = %f\n", A / B); // 나눗셈
    // printf("A %% B = %d\n", A % B); // 나머지 주의: float에서 안됨
    // 몫을 얻고자 한다면? (python의 몫 연산자 //, c에서 // 은 주석)
    printf("A // B = %d \n", (int)(A/B)); // 힌트:type casting!!
    return 0;
}