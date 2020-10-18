#include <sched.h>
int main(void)
{
    int i,j;
    int a=1;
    int juzheng1[4][3];
    int juzheng2[3][4];
    int juzhenghe[4][4];
    printf("请输入4行3列矩阵各个元素值。\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            scanf("%d",&juzheng1[i][j]);
        }
    }
    printf("请输入4行3列矩阵各个元素值。\n");
     for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            scanf("%d",&juzheng2[i][j]);
        }
    }
    printf("他们的乘积是：\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            for(a=1;a<=4;a++){
                juzhenghe[i][j] +=juzheng1[i][a]*juzheng2[a][j];
            }
        }
    }
    printf("矩阵形式：\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%3d ",juzhenghe[i][j]);
            if(j==3){
                printf("\n");
            }
        }
    }
    printf("\n\n");
    return 0;
}