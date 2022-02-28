#include<stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    a +=5 , b *=2;
    printf("width = %d\nlength = %d\narea = %d",a,b,a*b); 
    return 0;
}