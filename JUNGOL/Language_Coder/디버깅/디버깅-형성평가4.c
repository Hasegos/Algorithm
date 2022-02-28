#include<stdio.h>
#include<time.h>
/*
    다음의 프로그램을 작성하고 디버깅을 하며 ①, ②, ③ 위치의 값을 watches에서 a의 값을 출력하시오.
    즉, ​①에서 a의 값,  ②에서 a의 값, ③에서 a의 값을 1,2,3과 바꾸어 출력하면 됩니다.   
    (PC의 시간이 맞는지 확인하세요. 시간이 다르면 결과가 틀릴 수 있습니다.)
*/
int main(void)
{
    int a =0;
    time_t now;
    struct  tm tt;
    time(&now);
    tt = *localtime(&now);
    a = tt.tm_year;    
    a += tt.tm_mon;        
    a += tt.tm_mday;    
    printf("%d %d %d\n",0,118,141);
    
    return 0;
}