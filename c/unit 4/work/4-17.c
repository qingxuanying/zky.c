#include <stdio.h>
int main(void)
{
    int i,n,a;
    printf("整数值：");scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d的二次方是：%d\n",i,i*i);
    }
    printf("\n");
    return 0;
    
}