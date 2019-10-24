#include <stdio.h>

int main(void)
{
    int A = 1, B = 2, C = 3;
    printf("A + B * C = %d \n", A + B * C);
    printf("A + B * C = %d \n", A + (B * C));
    printf("A + B * C = %d \n", (A + B) * C);
    // 의심스러울 때는 무조건 괄호 치기!
    // 결합의 방향은 왼쪽에서 오른쪽으로
    printf("A + -B = %d", A + -B); // 단항: 우측결합
    return 0;
}