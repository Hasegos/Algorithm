#include<stdio.h>
/* 
    두 개의 정수를 입력받아 큰 수에서 작은 수를 뺀 차를 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a > b)
    {
        printf("%d",a - b);
    }
    else 
    {
        printf("%d",b - a);
    }
    return 0;
}