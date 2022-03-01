#include<stdio.h>
/*
    두 개의 정수를 입력받아 두 정수 사이(두 정수를 포함)에 3의 배수이거나 5의 배수인 수들의 합과 평균을
    출력하는 프로그램을 작성하시오.
    (평균은 반올림하여 소수 첫째자리까지 출력한다.)
*/
int main(void)
{
    int a,b,sum = 0,c = 0;
    scanf("%d %d",&a,&b);
    if(a > b)
    {
        for(int i = b; i <= a; i++)
        {
            if(i % 3 == 0 || i % 5 ==0)
            {
                sum += i;
                c++;
            }
        }
    }
    else if(a < b)
    {
        for(int i = a; i <= b; i++)
        {
            if(i % 3 == 0 || i % 5 ==0)
            {
                sum += i;
                c++;
            }
        }
    }
    else
    {
        sum =  a;
        c = 1;
    }
    printf("sum : %d\navg : %.1lf",sum,(double)sum /c);
    return 0;
}