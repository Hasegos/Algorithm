#include<stdio.h>
/*
    정수를 입력받아 0 이면 "zero" 양수이면 "plus" 음수이면 "minus" 라고 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int num;
    scanf("%d",&num);
    if(num == 0)
    {
        printf("zero");
    }
    else if(num > 0)
    {
        printf("plus");
    }
    else
    {
        printf("minus");
    }
    return 0;
}