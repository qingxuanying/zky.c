#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个整数");
    scanf("%d",&no);
    if (no%2)
    {
        puts("该整数是个奇数。");
    }
    else
    puts("该整数是个偶数。");
    
}