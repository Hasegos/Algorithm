#include<stdio.h>

int main(void)
{
    double a,b;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);    
    printf("%.2lf\n%.2lf\n%c",a,b,c);
    return 0;
}