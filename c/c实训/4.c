#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,s,sum=0;
    int p[100];
    printf("几乘几的矩阵:");
    scanf("%d",&n);
    s=n*n;
    for(int i=0;i<s;i++){
        scanf("%d",&p[i]);
    }
    printf("\n第二行元素：");
    for(int i=n;i<n+n;i++){
        printf("%2d ",p[i]);
        sum+=p[i];
    }
    printf("\n和为：%d",sum);

}