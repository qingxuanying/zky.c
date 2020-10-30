#include <stdio.h>
#define NUMVER 5
int bsort(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=1;j<=n-i;j++){
            if(a[j]<a[j-1]){
                int temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(void)
{
    int i;
    int height[NUMVER];
    printf("type %d people`s height\n",NUMVER);
    for(i=0;i<NUMVER;i++){
        printf("NO.%d:",i+1);scanf("%d",&height[i]);
    }
    printf("\n\n");
    bsort(height,NUMVER);
    for(i=0;i<NUMVER;i++){
        printf("NO.%d  : %d\n",i+1,height[i]);
    }
    return 0;
}