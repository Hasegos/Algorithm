#include<stdio.h>
/*
    10 이하의 자연수 n을 입력받아 "JUNGOL​"을 n번 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int num;
    scanf("%d",&num);
    for(int i = 1; i <=num; i++)
    {
        printf("JUNGOL\n");
    }
    return 0;
}