#include<stdio.h>
/*
    정수를 계속 입력받다가 100 이상의 수가 입력이 되면 마지막 입력된 수를 포함하여
    합계와 평균을 출력하는 프로그램을 작성하시오.
    (평균은 반올림하여 소수 첫째자리까지 출력한다.)
*/
int main(void)
{
    int num = 0,sum = 0,a = 0; /* num : 숫자  sum : 합계 a : 횟수*/       
    while (num<=100)
    {
        scanf("%d",&num);
        sum =sum + num;
        a++;
        if(num == 100)
        {
            break;
        }
    }     
    printf("%d\n%.1lf",sum,(double)sum /(double)a);
    return 0;
}