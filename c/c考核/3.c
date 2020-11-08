#include <stdio.h>
int main(void)
{
    int i,j;
    int v[3][3];
    printf("请输入这个矩阵\n");
    for(i=0;i<3;i++){
        printf("第%d行:",i+1);
        for(j=0;j<3;j++){
            scanf("%d",&v[i][j]);
        }

    }
    printf("这个矩阵的转置矩阵是\n");
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            printf("%3d ",v[i][j]);
        }
        printf("\n");
    }
    return 0;
}