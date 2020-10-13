#include <stdio.h>
int main(void)
{
    int n1,n2;
    puts("请输入两个整数");
    printf("整数a：");scanf("%d",&n1);
    printf("整数b：");scanf("%d",&n2);
    if (n1!=n2)
    {
        puts("整数a不等于整数b");
    }
    else
    {
        puts("整数a等于b");
    }
    return 0;
}