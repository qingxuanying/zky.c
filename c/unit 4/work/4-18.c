#include <stdio.h>
int main(void)
{
    int i,n;
    printf("整数值：");scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i%5==0){
            printf("\n");
        }
        putchar('*');
    }
    putchar('\n');
    return 0;
}