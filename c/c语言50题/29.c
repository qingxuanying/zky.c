#include <stdio.h>
int sum_2(int a ,int b){
    return (a*10+b+b*10+a);
}
int main(void){
    int n,sum;
    sum=0;
    printf("要输入几个数：");scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        printf("第%d个数：",i+1);
        scanf("%d",&v[i]);
    }
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=1;j<n;j++){
            sum=sum_2(v[i],v[j]);
        }
    }
    printf("组合数的和为:%d",sum);
    return 0;
}