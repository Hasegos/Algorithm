#include<stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d",&a,&b); 
    c =  a ,a++,--b;
    printf("%d %d %d",a,b,c*b);   
    return 0;
}