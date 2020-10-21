#include <stdio.h>
int search_idex(int v[],int idex[],int key,int n){
    int i,j;
    j=0;
    for(i=0;i<n;i++){
        if(v[i]==key){
            j++;
            idex[j]=v[i];
        }
    }
    return j;
}
int main(void){
    int i,n;
    printf("要输入几个数？");scanf("%d",&n);
    int v[n];
    int idex[n+1];
    int key;
    
    printf("请输入这些数。\n");
    for(i=0;i<n;i++){
        printf("第 %d 个数:",i+1);scanf("%d",&v[i]);
    }
    printf("要查找的值：");scanf("%d",&key);
    printf("有%d个要查找值。\n",search_idex(v,idex,key,n));
   /* printf("\n{");
     for ( i = 0; i < search_idex(v,idex,key,n) ; i++)
    {
        printf("%d",idex[i+1]);
    }
    printf("}\n");*/
    return 0;
    
}