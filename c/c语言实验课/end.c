#include<stdio.h>
int *myfunc(int *p, int n){
    int i,j,tmp,flag,k;
    flag=0;
    for(i=0;i<n;i++){
        k=i;
        if(p[k]==0 && p[k+1]==0 && k<n-flag-1){
            i--;
        }
        if(p[k]==0){
            flag++;
            for(j=k;j<n;j++){
                tmp=p[j];
                p[j]=p[j+1];
                p[j+1]=tmp;
            }
        }
        
    }
}
void main()
{
    int a[100],n,i;
    printf("输入多少个数:");
    scanf("%d",&n);
    printf("\n输入这些数\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    myfunc(a,n);
    printf("排序后:\n");
    for(i=0;i<n;i++){
        printf("%3d ",a[i]);
    }
    printf("\n");
}