#include <stdio.h>

int main(void)
{
    int A;    float B;    long C;    double D;
    // 타입 별 크기 비교
    printf("size of A = %lu\n", sizeof(A));
    printf("size of B = %lu\n", sizeof(B));
    printf("size of C = %lu\n", sizeof(C));
    printf("size of D = %lu\n\n", sizeof(D));

    int a[3]; float b[3]; long c[3]; double d[3];
    // 타입 별 배열의 크기 비교
    printf("size of a = %lu\n", sizeof(a));
    printf("size of a[1] = %lu\n", sizeof(a[1])); // sizeof(a[1]) * 3 = 4*3 =12
    printf("size of b = %lu\n", sizeof(b));
    printf("size of b[1] = %lu\n", sizeof(b[1]));
    printf("size of c = %lu\n", sizeof(c));
    printf("size of c[1] = %lu\n", sizeof(c[1]));
    printf("size of d = %lu\n", sizeof(d));
    printf("size of d[1] = %lu\n\n", sizeof(d[1]));
    
    char E;   char e[3];
    // 문자형 타입의 크기 비교
    printf("size of E = %lu\n", sizeof(E)); // 1 bit 0:1, 1 byte = 8bit 
    printf("size of e = %lu\n", sizeof(e));
    printf("size of e[1] = %lu\n", sizeof(e[1]));
    
    return 0;
}