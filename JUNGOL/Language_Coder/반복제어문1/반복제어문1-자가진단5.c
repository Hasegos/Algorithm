#include<stdio.h>
/*
    정수를 입력받아서 3의 배수가 아닌 경우에는 아무 작업도 하지 않고
    3의 배수인 경우에는 3으로 나눈몫을 출력하는 작업을 반복하다가
    -1이 입력되면 종료하는 프로그램을 작성하시오.
    * 입출력예의 진한 글씨는 실행값이다.
*/
int main(void)
{
    int num;
    while (num != -1)
    {
        scanf("%d",&num);
        if(num % 3 == 0)
        {
            printf("%d\n",num/3);
        }        
    }
    
    return 0;
}