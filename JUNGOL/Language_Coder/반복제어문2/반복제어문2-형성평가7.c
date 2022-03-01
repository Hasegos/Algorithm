#include<stdio.h>
/*
    한 개의 자연수를 입력받아 그 수의 배수를 차례로 10개 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int num;
    scanf("%d",&num);
    for(int i = 1; i <= 10; i++)
    {
        printf("%d ",num * i);
    }
    return 0;
}