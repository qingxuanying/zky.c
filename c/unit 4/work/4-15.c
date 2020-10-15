#include <stdio.h>
int main(void)
{
    int a,z,d,i,r;
    printf("开始数值（cm）：");scanf("%d",&a);
    printf("结束数值（cm）：");scanf("%d",&z);
    printf("间隔数值（cm）：");scanf("%d",&d);
    for(i=a;i<=z;i=i+d){
        printf("%dcm      ",i);printf("%.2fkg\n",(double)(i-100)*0.9);
    }
    printf("\n");
    return 0;
}