#include<stdio.h>

int main(void)
{
    double yd1 =91.44,a;
    printf("yard? ");
    scanf("%lf",&a);
    printf("%.1lfyard = %.1lfcm",a,yd1 *a);
    return 0;
}