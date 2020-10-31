#include <stdio.h>
int max_2(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(void)
{
    int n;
    printf("要输入几个复数：");scanf("%d",&n);
    int v[n][2];
    printf("输入这些复数。\n");
    int i,j;
    for(i=0;i<n;i++){
        printf("请输入第%d个数\n",i+1);
        printf("实数部分：");scanf("%d",&v[i][0]);
        printf("虚数部分：");scanf("%d",&v[i][1]);
    }
    int max,tmp;
    max=0;
    for(i=0;i<n;i++){
        tmp=v[i][0]*v[i][0]+v[i][1]*v[i][1];
        max=max_2(tmp,max);
    }
    printf("模半径为：%d",max);/*因为linux系统无法使用<math.h>库函数，故暂时输出模半径平方*/
    return 0;
}