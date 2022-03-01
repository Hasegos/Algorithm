#include<stdio.h>
/*
    0 이상의 정수들이 공백으로 구분되어 반복적으로 주어진다.
    0이 입력되면 반복문을 멈추고 그 전까지 입력받은 수들에 대하여
    홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int num,even = 0 , odd = 0;    
    while (num != 0)
    {
        scanf("%d",&num);
        if(num % 2 == 0 && num != 0)
        {
            even ++;
        }
        else if(num != 0)
        {
            odd ++;
        }
    }
    printf("odd : %d\neven : %d",odd,even);    

    return 0;
}