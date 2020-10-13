#include <stdio.h>
int main(void)
{
    int num;
    printf("请输入一个整数：");scanf("%d",&num);
    if(num>0)
         if(num%2==0)
            puts("该整数是偶数");
        else
            puts("该整数是奇数");
    else
         puts("该整数不是正数");
    return 0;
}