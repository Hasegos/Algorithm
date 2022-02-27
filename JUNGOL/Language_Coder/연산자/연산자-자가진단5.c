#include<stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n%d",a == b ,a!=b); /* 0은 어차피 자동 거짓. 참만 출력하면됨.*/
    
    return 0;
}