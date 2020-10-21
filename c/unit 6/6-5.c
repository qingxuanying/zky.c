#include <stdio.h>
int sumup(int n)
{
    return (n+1)*n/2;
}
int main(void)
{
    int n;
    printf("请输入一个整数n:");scanf("%d",&n);
    printf("1~%d间所有整数的和是：%d\n",n,sumup(n));
    return 0;

}