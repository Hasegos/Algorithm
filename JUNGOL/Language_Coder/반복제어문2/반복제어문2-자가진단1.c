#include<stdio.h>
/*
    문자를 입력받아서 입력받은 문자를 20번 반복하여 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    char c;
    scanf(" %c",&c);
    for(int i = 1;  i <= 20; i++)
    {
        printf("%c",c);
    }
    return 0;
}