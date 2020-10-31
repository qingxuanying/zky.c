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
    int m,n;
    int x,y;
    int i,j;
    printf("父矩阵有几行　");scanf("%d",&m);
    printf("父矩阵有几列：");scanf("%d",&n);
    printf("子矩阵有几行：");scanf("%d",&x);
    printf("子矩阵有几列：");scanf("%d",&y);
    printf("请输入父矩阵:");
    int v[m][n];
    for(i=0;i<m;i++){
        printf("\n第%d 行：\n",i+1);
        for(j=0;j<n;j++){
            scanf("%d    ",&v[i][j]);
        }
    }
    printf("子矩阵最大的元素和是：");
    int max,tmp;
    int k,t;
    max=0;
    for(k=0;k<m-x;k++)
    {
        for(i=k;i<k+x;i++)
        {
            for(t=0;t<n-y;t++)
            {
                for(j=k;j<t+y;j++)
                {
                    tmp += v[i][j];
                }
                max=max_2(max,tmp);
            }
        }
    }
    printf("%d",max);
    return 0;
}