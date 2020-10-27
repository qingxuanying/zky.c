#include <stdio.h>
unsigned rrotate(unsigned a,int b){
    a<<=b;
    return a;
}
unsigned lrotate(unsigned a,int b){
    a>>=b;
    return a;
}
int main(void)
{
    unsigned x;
    int n;
    printf("请输入一个非负整数：");scanf("%u",&x);
    printf("位移位数：");scanf("%d",&n);
    printf("右移后的数:%u\n",rrotate(x,n));
    printf("左移后的数:%u\n\n",lrotate(x,n));
    return 0;
}