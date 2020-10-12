#include <stdio.h>
int main(void)
{
    int vx=3.1415;
    int vy=vx-0.1415;
    printf("vx的值是%d。\n",vx);
    printf("vy的值是%d。\n",vy);
    /* 小数部分被自动取整*/
    return 0;
}