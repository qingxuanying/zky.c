#include <stdio.h>
#define swap(int,a,b) int c; c=a; a=b; b=c;
int bsort(int a[],int n){
    int i,j;
    int cnt=0;
    for(i=0;i<n;i++){
        for(j=1;j<=n-i;j++){
            if(a[j]<a[j-1]){
                int temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
                cnt++;
            }
        }
    }
    return cnt;
}
int main(void)
{
    int n,i,j;
    int a[n];
    printf("有多少节车厢：");scanf("%d",&n);
    printf("他们的顺序：");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("至少旋转%d次 \n",bsort(a,n)-n);
    return 0;
}