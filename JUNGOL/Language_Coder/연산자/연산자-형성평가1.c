#include<stdio.h>

int main(void)
{
    int kor,eng,mat,com;
    scanf("%d %d %d %d",&kor,&eng,&mat,&com);
    printf("sum %d\navg %d",kor+eng+mat+com,(kor+eng+mat+com)/4);
    return 0;
}