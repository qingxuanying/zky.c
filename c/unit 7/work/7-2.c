#include <stdio.h>
int pow(a,b){
    int i,c;
    c=1;
    for(i=0;i<b;i++){
        c=c*a;
    }
    return c;
}
int main(void)
{
    unsigned x,n;
    printf("请输入一个非负整数：");scanf("%u",&x);
    printf("位移位数：");scanf("%u",&n);
    printf("\n右移后的数：%u",x>>n);
    printf("\n左移后的数：%u",x<<n);
    printf("\nx*２的ｎ次指数幂 %u",x*pow(2,n));
    printf("\nx/２的ｎ次指数幂 %u",x/pow(2,n));
    putchar('\n0');
    return 0;
}