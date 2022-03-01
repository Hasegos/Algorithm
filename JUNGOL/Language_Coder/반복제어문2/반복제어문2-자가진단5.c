#include<stdio.h>
/*
    10개의 정수를 입력받아 3의 배수의 개수와 5의 배수의 개수를 각각 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int num,a = 0,b = 0; // a : 3의 배수  b : 5의 배수
    for(int i=1; i<=10; i++)
    {
        scanf("%d",&num);
        if(num % 3 == 0 && num != 0)
        {
            a++;
        }
        if(num % 5 == 0 && num != 0)
        {
            b++;
        }
    }
    printf("Multiples of 3 : %d\nMultiples of 5 : %d",a,b);

    return 0;
}