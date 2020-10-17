#include <stdio.h>
#define NUMBER 7
int main(void)
{
    int i;
    int x[NUMBER];
    int sum=0;
    printf("请输入%d名学生的分数。\n",NUMBER);
    for(i=1;i<NUMBER;i++){
        printf("x[%d]:",i);
        scanf("%d",&x[i]);
    }
    for(i=1;i<NUMBER/2;i++){
        int a=x[i];
        x[i]=x[NUMBER-i];
        x[NUMBER-i]=a;
    }
    puts("倒序排列后：");
    for(i=1;i<=NUMBER-1;i++){
        printf("x[%d]=%d\n",i,x[i]);
    }
    return 0;
}