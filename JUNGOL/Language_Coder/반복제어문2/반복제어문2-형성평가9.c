#include<stdio.h>
/*
    정수를 입력받아 다음과 같이 순서쌍을 출력하는 프로그램을 작성하시오.
    * 주의
    ')'와 '('사이에 공백이 1칸 있다.
    (1,_1) 처럼 출력한다 : '_'는 공백
*/
int main(void)
{
    int num;
    scanf("%d",&num);
    for(int i= 1; i <= num; i++)
    {
        for(int j=1; j <= num; j++)
        {
            printf("(%d, %d) ",i,j);
        }
        printf("\n");
    }
    return 0;
}