#include <stdio.h>
int main(void)
{
    int b;
    double a;
    a=b=1.5;
    printf("a是：%2f\n",a);
    printf("b是: %d \n",b);
    return 0;
}
/* 因为是将b的值赋予a，所以a为1.0000*/