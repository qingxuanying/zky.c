#include <stdio.h>
int main(void)
{
    int num,retry;
    do{

    printf("请输入一个整数：");scanf("%d",&num);
    if(num==0)
    {
        puts("它是0");
    }
    else if(num>0)
    {
        puts("它是个正数");
    }
    else
    {
        puts("他是个负数");
    }
    printf("是否继续？\n【yes...0/no....1");
    scanf("%d",&retry);
    }while(retry==0);
    return 0;
}