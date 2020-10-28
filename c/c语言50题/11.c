#include <stdio.h>
int bsort(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if(a[j-1]>a[j]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
int main()
{
    int x,y;
    printf("people n: ");scanf("%d",&x);
    printf("people m: ");scanf("%d",&y);
    int v[x];
    int i,j;
    for(i=0;i<x;i++){
        printf("NO.%d: ",i+1);
        scanf("%d",&v[i]);
    }
    bsort(v,x);
    printf("富翁们\n");
    if(x>y){
         for(i=0;i<y;i++){
            printf("NO.%d: ",i+1);
            printf("%d\n",v[y-i]);
        }
    }
    else{
        for(i=0;i<x;i++){
            printf("NO.%d",i+1);
            printf("%d\n",v[x-i]);
        }
    }
    printf("\n");
    return 0;
}