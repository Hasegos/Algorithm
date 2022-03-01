#include<stdio.h>
/*
    10개의 정수를 입력받아 입력받은 수들 중 짝수의 개수와 홀수의 개수를 각각 구하여 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int num,even = 0 , odd = 0;
    for(int i = 1; i <= 10; i++)
    {
        scanf("%d",&num);
        if(num % 2 == 0 && num  != 0)
        {
            even ++;
        }
        else if (num % 2 !=0 && num != 0)
        {
            odd++;
        }
    }
    printf("even : %d\nodd : %d",even,odd);
    return 0;
}