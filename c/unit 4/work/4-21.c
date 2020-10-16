#include <stdio.h>
int main(void)
{
    int a,i,j;
    printf("生成一个正方形\n 正方形的边为：");scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            putchar('*');
        }
    putchar('\n');
    }
    putchar('\n');
    return 0;
}