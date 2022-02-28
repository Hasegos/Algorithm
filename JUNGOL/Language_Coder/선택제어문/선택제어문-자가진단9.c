#include<stdio.h>
/*
    3개의 정수를 입력받아 조건연산자를 이용하여 입력받은 수들 중 최소값을 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int a,b,c,min;
    scanf("%d %d %d",&a,&b,&c);
    if(a >b)
    {
        min = b;
        if(min > c)
        {
            min = c;
            printf("%d",min);
        }  
        else if(min < c)
        {
            printf("%d",min);    
        }  
    }
    else if(a < b)
    {
        min = a;
        if(min > c)
        {
            min = c;
            printf("%d",min);
        }
        else if(min < c)
        {
            printf("%d",min);
        }
    }
    return 0;
}