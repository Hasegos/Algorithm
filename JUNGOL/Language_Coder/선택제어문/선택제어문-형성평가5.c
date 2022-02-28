#include<stdio.h>
/*
    1~12사이의 정수를 입력받아 평년의 경우 입력받은 월을 입력받아 평년의 경우 해당 월의 날수를 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int num;
    scanf("%d",&num);
    if(num == 4 || num == 6 || num == 9 || num == 11)
    {
        printf("30");
    }
    else if(num == 2)
    {
        printf("28");
    }
    else
    {
        printf("31");
    }
    return 0;
}