#include <stdio.h>
int main(void)
{
    int n,i;
    int x[n];
    int ave;
    ave=1;
    printf("要输入几个数：");scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("第%d个数是:",i+1);scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]%2==1){
            ave=ave*x[i];
        }
    }
    printf("\n他们中的奇数乘积是：%d\n",ave);
    return 0;
}