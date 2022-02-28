#include<stdio.h>
/*
    년도를 입력받아 윤년(leap year)인지 평년(common year)인지 판단하는 프로그램을 작성하시오.
*/
int main(void)
{
    int year;
    scanf("%d",&year);
    if(year%400 == 0 || (year%4 == 0 && year%100 != 0))
    {
        printf("leap year");
    }
    else
    {
        printf("common year");
    }
    return 0;
}