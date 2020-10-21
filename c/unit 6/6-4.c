#include <stdio.h>
int sqr(int x){
    return x*x;
}
int pow4(int x){
    return sqr(sqr(x));
}
int main(void){
    int n;
    printf("请输入一个整数。");
    printf("请输入整数x：\n"); scanf("%d",&n);
    printf("他的四次幂是：%d\n",pow4(n));
    return 0;
}