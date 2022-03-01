#include<stdio.h>
/*
    10 이하의 과목수 n이 주어진다.
    정수로 주어진 n개 과목의 점수를 입력받아서 실수 평균을 구하여 출력하고 
    평균이 80점이상이면 "pass", 80점 미만이면 "fail"이라고 출력하는 프로그램을 작성하시오.
    평균은 반올림하여 소수 첫째자리까지 출력한다.​
*/
int main(void)
{
    int num,a,sum = 0; // num : 횟수 a : 입력 값 sum : 합계
    scanf("%d",&num);
    for(int i = 1; i <=num; i++)
    {
        scanf("%d",&a);
        sum += a;
    }
    printf("avg : %.1lf\n",(double)sum / num);
    double avg = (double)sum / num;
    if(avg >= 80)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    
    return 0;
}