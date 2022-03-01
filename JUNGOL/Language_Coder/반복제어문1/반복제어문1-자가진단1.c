#include<stdio.h>
/*
    1부터 15까지 차례로 출력하는 프로그램을 작성하시오. while문을 이용하세요.
*/
int main(void)
{
    int num = 1;
    while (num < 16)
    {
        printf("%d ",num);
        num++;
    }
    
    return 0;
}