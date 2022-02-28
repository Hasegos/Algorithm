#include<stdio.h>
/*
    두 개의 실수를 입력받아 모두 4.0 이상이면 "A", 모두 3.0 이상이면 "B", 아니면 "C" 라고 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    double num,num2;
    scanf("%lf %lf",&num,&num2);
    if(num >= 4.0 && num2 >= 4.0)
    {
        printf("A");
    }
    else if(num >= 3.0 && num2 >= 3.0)
    {
        printf("B");
    }
    else 
    {
        printf("C");
    }
    return 0;
}