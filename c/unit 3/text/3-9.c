#include <stdio.h>
int main(void)
{
    int num;
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
    return 0;
}