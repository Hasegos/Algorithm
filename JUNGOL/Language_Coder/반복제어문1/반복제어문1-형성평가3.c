#include<stdio.h>
/*
    0 부터 100 까지의 정수를 계속 입력받다가 범위를 벗어나는 수가 입력되면
    그 이전까지 입력된 자료의 합계와 평균을 출력하는 프로그램을 작성하시오.
    (평균은 반올림하여 소수 첫째자리까지 출력한다.)
*/
int main(void)
{
    int num,sum = 0,a =0; /* num : 숫자 sum : 합계 a : 횟수*/
    while(1)
    {
        scanf("%d",&num);
        if(num > 100 || num < 0)
        {
            break;
        }
        sum += num;
        a++;
    }
    printf("sum : %d\navg : %.1lf",sum,(double)sum / (double)a);
    return 0;
}