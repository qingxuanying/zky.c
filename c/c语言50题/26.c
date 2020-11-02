/*先求最大公因子，再求最小公倍数*/
#include <stdio.h>
int gongyin(int a,int b){
    int c;
    c=a%b;
    while(c != 0)
    {
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}
int main(void)
{
    int a,b;
    int c;
    int q,p;
    printf("请输入两个整数。");
    printf("较大的整数a：\n");scanf("%d",&a);
    printf("较大的整数b：\n");scanf("%d",&b);
    if(b>a){
        c=b;a=b;b=c;
    }
    p=gongyin(a,b);
    printf("\n他们的最大公约数是：%d。",p);
    q=(a*b)/p;/*由数学关系，最小公倍数乘以最大公因数＝＝原两个数的乘积。*/
    printf("\n他们的最小公倍数是：%d。",q);
    printf("\n");
    return 0;
}