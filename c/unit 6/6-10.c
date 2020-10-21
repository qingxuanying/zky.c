#include <stdio.h>
int dx(const int v[],int n){
    int b[n];
    int i;
    printf("{");
    for(i=0;i<n;i++){
        b[i]=v[n-i-1];
        printf("%d",b[i]);
    }
    printf("}");
}
int main(void){
    int n;
    int v[n];
    int i,j,k;
    printf("要输入几个数：");scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("第%d个数：\n",i+1);
        scanf("%d",&v[i]);
    }
    printf("原数组｛");
    for ( i = 0; i < n; i++)
    {
        printf("%d",v[i]);
    }
    printf("}\n");
    printf("倒序排列后");
    dx(v,n);
    printf("\n\n");
    return 0;
}