#include<stdio.h>
#include<math.h>
int main()
{
    int x,a,b;
    x=random();
    x=x%6;
    printf("%d",x);
    printf("猜一下大还是小:0....小，1.....大: ");
    scanf("%d",&a);
    if(a!=0 && a!=1){
        printf("输入非法;");
        exit(-1);
    }
    if((a==0 && x<=3) || (a==1 && x>3)){
        printf("x=:%d",x);
        printf("\n你猜对了");
    }
    else{
        printf("x=:%d",x);
        printf("\n你猜错了");
    }
}