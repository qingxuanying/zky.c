#include <stdio.h>
int main(void)
{
    int i,n;
    printf("整数值：");scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==1){
            printf("%d  ",i);
        }
    }
    printf("\n");
    return 0;
}