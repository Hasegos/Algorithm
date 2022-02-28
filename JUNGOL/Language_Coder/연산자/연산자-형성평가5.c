#include<stdio.h>

int main(void)
{
    int height ,weight,height2,weight2;
    scanf("%d %d",&height,&weight);
    scanf("%d %d",&height2,&weight2);
    printf("%d",height > height2 && weight > weight2);

    return 0;
}