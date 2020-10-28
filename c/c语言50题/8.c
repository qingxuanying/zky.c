#include <stdio.h>
#include <limits.h>
#define n  999
int main(void)
{
    int i,m;
    float min,max,sum,x[n];
    printf("有几个评委？：\n");scanf("%d",&m);
    printf("每个评委给的分数。\n");
    for(i=0;i<m;i++){
        printf("第%d位评委所给的分数：",i+1);
        scanf("%f",&x[i]);
    }
    sum=0;
    min=x[0];
    max=x[0];
    for(i=0;i<m;i++){
        if(x[i]>max){
            max=x[i];
        }
        if(x[i]<min){
            min=x[i];
        }
        sum=x[i]+sum;
    }
    float ave=(sum-min-max)/(m-2);
    printf("去掉最高分和最低分后的平均分是：%.2f\n",ave);
    return 0;
}