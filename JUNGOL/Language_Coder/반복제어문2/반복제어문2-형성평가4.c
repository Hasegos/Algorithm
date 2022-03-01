#include<stdio.h>
/*
    100 이하의 자연수 n을 입력받고 n개의 정수를 입력받아 평균을 출력하는 프로그램을 작성하시오.
    (평균은 반올림하여 소수 둘째자리까지 출력하도록 한다.)
*/
int main(void)
{
    int num,a,sum = 0;
    scanf("%d",&num);
    for(int i = 1; i <= num; i++)
    {
        scanf("%d",&a);
        sum += a;
    }
    printf("%.2lf",(double)sum / num);
    return 0;
}