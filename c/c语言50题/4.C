#include <stdio.h>
int main(void)
{
    int a,b;
    int c;
    int yu;
    printf("请输入两个整数。");
    printf("较大的整数a：\n");scanf("%d",&a);
    printf("较大的整数b：\n");scanf("%d",&b);
    if(b>a){
        c=b;a=b;b=c;
    }
    c=a%b;
    while(c != 0)
    {
        a=b;
        b=c;
        c=a%b;
    }
   /* c=a%b;
    while(c !=0)
    {
        a=b;
        b=c;
        c=a%b;
    }*/
    printf("他们的最大公约数是%d。",b);
    return 0;
}