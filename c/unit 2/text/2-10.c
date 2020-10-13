#include <stdio.h>
int main(void)
{
    int vx,vy;
    puts("请输入两个整数");
    printf("整数vx： "); scanf("%d",&vx);
    printf("整数vy： "); scanf("%d",&vy);

    printf("他们的平均值是%f。\n", (double)(vx+vy)/2);
    return 0;
}