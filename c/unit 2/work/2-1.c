#include <stdio.h>
int main(void)
{
    int a,b;
    printf("请输入了两个整数。");
    printf("整数x:");scanf("%d",&a);
    printf("整数y:");scanf("%d",&b);
    printf("x的值是y的%d%\n",100*a/b);
    return 0;

}