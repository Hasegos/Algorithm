#include<stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d * %d = %d\n",a,b,a*b);
    if(a >=b)
    {
        printf("%d / %d = %d",a,b,a/b);
    }
    else if(a < b)
    {
         printf("%d / %d = %d",b,a,b/a);
    }
    return 0;
}