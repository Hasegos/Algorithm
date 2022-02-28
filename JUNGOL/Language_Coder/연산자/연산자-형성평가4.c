#include<stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d\n",++a,b--); /* a : 11  b : 15 */
    printf("%d %d",a,b); /* 11 그대로   뺀값 14 출력 */
    return 0;
}