#include<stdio.h>
/*
    100 이하의 두 개의 정수를 입력받아 작은 수부터 큰 수까지 차례대로 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a > b)
    {
        for(int i = b; i <= a; i++)
        {
            printf("%d ",i);
        }
    }
    else if(a < b)
    {
        for(int i = a; i <= b; i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
        printf("%d",a);
    }
    return 0;
}