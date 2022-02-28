#include<stdio.h>
/*
    정수로 된 3과목의 점수를 입력받아 평균을 구한 후 반올림하여 소수 첫째자리까지 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%.1lf",(double)(a+b+c)/3);
    return 0;
}