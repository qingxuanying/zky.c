#include <stdio.h>
int main(void)
{
    int a,b,c;
    puts("请输入三个整数");
    printf("整数a：");scanf("%d",&a);
    printf("整数b：");scanf("%d",&b);
    printf("整数c：");scanf("%d",&c);
    if(a==b|| a==c || b==c )puts("有两个值相等");
    else puts("三个值各不相等");
    return 0;
}