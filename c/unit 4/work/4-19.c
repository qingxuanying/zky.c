#include <stdio.h>
int main(void)
{
    int i,n,a;
    a=0;
    printf("整数值：");scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d  ",i);
            a++;
        }
    }
    printf("\n");
    printf("该整数有%d个约数",a);
    printf("\n");
    return 0;
}