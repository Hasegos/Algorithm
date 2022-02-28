#include<stdio.h>
/*
    복싱체급은 몸무게가
    50.80kg 이하를 Flyweight, 
    61.23kg 이하를 Lightweight, 
    72.57kg 이하를 Middleweight, 
    88.45kg 이하를 Cruiserweight, 
    88.45kg 초과를 Heavyweight
    라고 하자.
    몸무게를 입력받아 체급을 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    double weight;
    scanf("%lf",&weight);
    if(0 < weight && weight <= 50.88)
    {
        printf("Flyweight");
    }
    else if(weight <= 61.23)
    {
        printf("Lightweight");
    }
    else if(weight <= 72.57)
    {
        printf("Middleweight");
    }
    else if(weight <= 88.45)
    {
        printf("Cruiserweight");
    }
    else
    {
        printf("Heavyweight");
    }
    return 0;
}