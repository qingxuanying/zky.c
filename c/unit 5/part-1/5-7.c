#include <stdio.h>
#define NUMBER 100
int main(void)
{
    int i,j;
    int num;
    int x[NUMBER];
    int y[11]={0}; 
    printf("数据个数:");
    do{
        scanf("%d",&num);
        if(num<1||num>NUMBER){
            printf("\a请输入1-%d的数:",NUMBER);
        }
    }while(num<1||num>NUMBER);
    printf("请输入没个号数对应的数据：\n");
    for(i=1;i<=num;i++){
        printf("%3d号:",i);
        scanf("%d",&y[i]);
    }
    printf("{");
    for(i=1;i<num;i++){
        printf("%d,",y[i]);
    }
    printf("%d",y[num]);
    printf("}");
    printf("\n");
    return 0;
    }