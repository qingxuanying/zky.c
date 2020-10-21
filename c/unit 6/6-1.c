#include <stdio.h>
/*函数部分*/
int min2(int a, int b){
    return(a<b)? a : b;
}
int main(void)
{
    int n1,n2;
    printf("请输入两个整数。");
    printf("请输入整数a：\n"); scanf("%d",&n1);
    printf("请输入整数b：\n"); scanf("%d",&n2);
    printf("他们中较小的是：%d\n",min2(n1,n2));
    return 0;

}