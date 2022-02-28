#include<stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c = ((a*b)!=0) , d = ((a+b)!=0); /* 참과 거짓 판단 저장 */    
    printf("%d %d",c,d);

    return 0;
}