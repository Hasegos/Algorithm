#include<stdio.h>
/*
    하나의 정수를 입력받아 1부터 입력받은 정수까지의 짝수를 차례대로 출력하는 프로그램을 작성하시오.
    입력되는 정수는 50이하이다.
*/
int main(void)
{
    int i;
    scanf("%d",&i);
    for(int k = 1; k <=i/2; k++)/* 2배 씩 커지게 했으니 최대치를 2배 낮추면된다. */
    {
        printf("%d ",k*2);
    }
    return 0;
}