#include <stdio.h>
int main(void)
{
    int retry,a,b,c,d,e,num;
    do{
        printf("请输入两个整数\n");
        printf("整数a：");scanf("%d",&a);
        printf("整数b：");scanf("%d",&b);
        if(a>b)
        {
            c=a;
            a=b;
            b=c;
        }
        else{
            c=0;
        }
        d=(a+b)/2;
        e=b-a+1;
        num=e*d;
        printf("大于等于%d小于等于%d的所有整数和是：%d",a,b,num);
        printf("是否继续？【yes...0/no...1】");scanf("%d",&retry);
    }while(retry==0);
    return 0;
}