#include <stdio.h>
int abs(int a){
    int b;
    b=a;
    if(a<0){
        b=-a;
    }
    return b;
}
void bsort(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if(abs(a[j-1])>abs(a[j])){
                int temp = a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
int main(void)
{
    int n,i,j;
    int x[n];
    printf("要输入几个数：");scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("第%d个数是:",i+1);scanf("%d",&x[i]);
    }
    printf("按绝对值排序后");
    bsort(x,n);
    for(i=0;i<n;i++){
        printf("%4d",x[i]);
    }
    return 0;
}