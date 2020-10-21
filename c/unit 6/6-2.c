#include <stdio.h>
int min3(int a,int b,int c){
    int min=a;
    if(b<min){min=b;}
    if(c<min){min=c;}
    return min;
}
int main(void){
    int n1,n2,n3;
    printf("请输入三个整数。");
    printf("请输入整数a：\n"); scanf("%d",&n1);
    printf("请输入整数b：\n"); scanf("%d",&n2);
    printf("请输入整数c：\n"); scanf("%d",&n3);
    printf("最小的数是%d\n",min3(n1,n2,n3));
    return 0;
}