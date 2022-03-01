#include<stdio.h>
/*
    2부터 9까지의 수 중 2개를 입력받아 입력받은 수 사이의 구구단을 출력하는 프로그램을 작성하시오.
    단 반드시 먼저 입력된 수의 구구단부터 아래의 형식에 맞게 출력하여야 한다.
    구구단 사이의 공백은 3칸이다.
*/
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a > b)
    {
        for(int i=1; i <= 9; i++)
        {
            for(int j = a; j >= b; j--)
            {
                if(i * j < 10)
                {
                    printf("%d * %d =  %d   ",j,i,j*i);
                }
                else 
                {
                    printf("%d * %d = %d   ",j,i,j*i);
                }
            } 
            printf("\n");           
        }
    }
    else if(a < b)
    {
        for(int i=1; i <= 9; i++)
        {
            for(int j = a; j <= b; j++)
            {
                if(i * j < 10)
                {
                    printf("%d * %d =  %d   ",j,i,j*i);
                }
                else 
                {
                    printf("%d * %d = %d   ",j,i,j*i);
                }
            }
            printf("\n");              
        }
    }
    else 
    {
        for(int i=1; i <= 9; i++)
        {            
            if(i * a < 10)
            {
                printf("%d * %d =  %d   ",a,i,a*i);
            }
            else 
            {
                printf("%d * %d = %d   ",a,i,a*i);
            }
            printf("\n");  
        }

    }    
    return 0;
}