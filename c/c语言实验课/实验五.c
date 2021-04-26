#include<stdio.h>
void main()
{
    short int a,b,c,d,tnp;
    unsigned short int a1,b1,c1,d1,tmp;

    printf("请输入４个短整数：");
    scanf("%hd",&a);fflush(stdin);
    scanf("%hd",&b);fflush(stdin);
    scanf("%hd",&c);fflush(stdin);
    scanf("%hd",&d);fflush(stdin);
     
    a1=a;
    b1=b;
    c1=c;
    d1=d;

    printf("b1:%u\n",b1);

    if((unsigned)a1>(unsigned)b1){
        tmp=a1;
        a1=b1;
        b1=tmp;

        tnp=a;
        a=b;
        b=tnp;
    }
    if((unsigned)c1>(unsigned)d1){
        tmp=c1;
        c1=d1;
        d1=tmp;

        tnp=c;
        c=d;
        d=tnp;
    }
    
    //max==d1
    if((unsigned)b1>(unsigned)d1){
        d1=b1;
        d=b;
    }

    //min==a1
    if((unsigned)a1>(unsigned)c1){
        a1=c1;
        a=c;
    }

    //输出
    printf("最大的无符号数为:%u, 对应的输入为:%d\n",d1,d);
    printf("最小的无符号数为:%u, 对应的输入为:%d\n",a1,a);
    printf("它们的差为:%d\n",d1-a1);
}