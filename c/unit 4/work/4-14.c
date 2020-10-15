#include <stdio.h>
int main(void)
{
    int i,n,a,b;
    a=1;
    printf("请输入一个整数:");scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d",a);
        a++;
        if(a>9){
            a=0;
        }
    }
    printf("\n");
    return 0;
}