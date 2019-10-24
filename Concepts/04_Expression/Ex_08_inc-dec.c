#include <stdio.h>

int main(void)
{
    int i = 1, j = 1, k = 1;
    i = i + 1; // 일반적인 연산
    j += 1;    // 합성 할당 연산자, -= *= /= %=
    k++;       // 증가 연산자 X++ --X

    printf("%d %d %d\n", i, j, k);  
    printf("%d\n\n", k);            

    j = 100, k = 100;
    printf("%d %d\n", ++j, k++);  
    printf("%d %d\n", j, k);      

    i = 1;
    j = 2;
    k = ++i + j++;
    printf("%d %d %d\n", i, j, k);
    printf("%d %d %d\n", i, j, k);

    i = 2;
    j = i * i++; 
    printf("%d %d\n", i, j); 
    return 0;
}