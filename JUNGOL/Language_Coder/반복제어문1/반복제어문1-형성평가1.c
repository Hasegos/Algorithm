#include<stdio.h>
/*
    정수를 입력받아 1부터 입력받은 정수까지를 차례대로 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int num,i = 1;
    scanf("%d",&num);
    while (i <= num)
    {
        printf("%d ",i);
        i++;
    }
    
    return 0;
}
