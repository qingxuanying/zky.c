#include <stdio.h>
int cube(int a){
    int b;
    b=a*a*a;
    return b;
}
int main(void)
{
    int x;
    printf("请输入整数x：\n"); scanf("%d",&x);
    printf("他多三次方是%d\n",cube(x));
    return 0;
}