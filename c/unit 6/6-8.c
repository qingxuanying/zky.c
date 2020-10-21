#include <stdio.h>
int min_of(const int v[],int n)
{
    int i;
    int min=v[0];
    for(i=0;i<n;i++){
        if(v[i]<min){
            min=v[i];
        }
    }
    return min;
}
int main(void){
    int n;
    int i,j;
    int v[n];
    printf("要输入几个数？");scanf("%d",&n);
    printf("请输入这%d个数。",n);
    for(i=0;i<n;i++){
        printf("请输入第%d个数：",i+1);
        scanf("%d",&v[i]);
    }
    printf("他们中最小的是: %4d\n\n",min_of(v,n));
    return 0;
}