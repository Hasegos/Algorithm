#include<stdio.h>
/*
    100 이하의 정수를 입력받아서 입력받은 정수부터 100까지의 합을 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int num,sum = 0;
    scanf("%d",&num);
    for(int i = num; i <= 100; i++)
    {
        sum += i;
    }
    printf("%d",sum);
    return 0;
}