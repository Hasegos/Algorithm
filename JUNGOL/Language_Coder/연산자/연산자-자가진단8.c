#include<stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d",a > b && a > c,a == b && a == c); /* 참과 거짓 출력 */
    return 0;
}