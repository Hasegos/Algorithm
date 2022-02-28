#include<stdio.h>
/*
    영문 대문자를 입력받아 
    'A'이면 “Excellent”, 
    'B'이면 “Good”, 
    'C'이면 “Usually”, 
    'D'이면 “Effort”, 
    'F'이면 “Failure”, 
    그 외 문자이면 “error” 라고 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    char c;
    scanf("%c",&c);
    if(c == 'A')
    {
        printf("Excellent");
    }
    else if(c == 'B')
    {
        printf("Good");
    }
    else if(c == 'C')
    {
        printf("Usually");
    }
    else if(c == 'D')
    {
        printf("Effort");
    }
    else if(c == 'F')
    {
        printf("Failure");
    }
    else
    {
        printf("error");
    }
    return 0;
}