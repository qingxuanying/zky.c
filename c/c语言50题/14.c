#include <stdio.h>
int main(void)
{
    int n;
    printf("n :");scanf("%d",&n);
    int x[n];int i;
    for(i=0;i<n;i++){
        printf("NO.%d : ",i+1);
        scanf("%d",&x[i]);
    }
    int min=x[0];int min_i;
      for(i=0;i<n;i++){
        if(x[i]<min){
            min=x[i];
            min_i=i;
        }
    }
    int temp;
    temp = x[0];
    x[0] = x[min_i];
    x[min_i] =temp;
    for(i=0;i<n;i++){
        printf("\nNO.%d: %d",i+1,x[i]);
    }
    printf("\n");
    return 0;
}