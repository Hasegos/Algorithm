#include<stdio.h>
/*
    나이를 입력받아 20살 이상이면 "adult"라고 출력하고 그렇지 않으면
    몇 년후에 성인이 되는지를 "○ years later"라는 메시지를 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    int num;
    scanf("%d",&num);
    if(num >= 20)
    {
        printf("adult");
    }
    else
    {
        printf("%d years later",20 - num); 
    }
    return 0;
}