#include<stdio.h>
/*
    아래와 같이 나라 이름을 출력하고 숫자를 입력받아 해당하는 나라의 수도를
    출력하는 작업을 반복하다가 해당하는 번호 이외의 숫자가 입력되면 "none"라고 출력한 후 종료하는 프로그램을 작성하시오.
    * 각 나라의 수도 : 
    대한민국 = 서울(Seoul)
    미국 = 워싱턴(Washington)
    일본 = 동경(Tokyo)
    중국 = 북경(Beijing)
    * 입출력시 모양은 "입·출력예"와 같이 하시오.​
*/
int main(void)
{
    int num;    
    while(1)
    {
        printf("\n1. Korea\n2. USA\n3. Japan\n4. China\nnumber? ");
        scanf("%d",&num);
        if(num == 1)
        {
            printf("\n\nSeoul\n\n");
        }
        else if(num == 2)
        {
            printf("\n\nWashington\n\n");
        }
        else if(num == 3)
        {
            printf("\n\nTokyo\n\n");
        }
        else if(num == 4)
        {
            printf("\n\nBeijing\n\n");
        }
        else
        {
            printf("\n\nnone");
            break;
        }
    }


    return 0;
}