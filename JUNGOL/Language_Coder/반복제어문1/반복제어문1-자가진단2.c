#include<stdio.h>
/*
    100 이하의 양의 정수만 입력된다.
    while 문을 이용하여 1부터 입력받은 정수까지의 합을 구하여 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int num , i =1, k =0;
    scanf("%d",&num);    
    while (i <= num)
    {
        k = k + i;
        i++;
    }
    printf("%d",k);
    
    return 0;
}