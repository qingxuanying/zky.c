#include <stdio.h>
int main(void)
{
    int n1;
    puts("请输入一个整数");
    printf("整数a：");scanf("%d",&n1);
    if (n1>=0)
    {
        printf("绝对值是%d\n",n1);
    }
    else
    {
        printf("绝对值是%d\n",-n1);
    }
    return 0;
}