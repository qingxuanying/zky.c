#include <stdio.h>
int mat_add(const int a[4][3],const int b[4][3],int c[4][3]){
    int i,j;
        for(i=0;i<4;i++){     
            for(j=0;j<3;j++)
                c[i][j]=a[i][j]+b[i][j];  
        }
}
int mat_printf(int m[4][3] )
{
    int i,j;
    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 3; j++){
            printf("%4d",m[i][j]);
        }
        putchar('\n');
    }
    
}

int main(void)
{
    int a[2][4][3] = {{{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}}};
    int sum[4][3];
    mat_add(a[0],a[1],sum);
    puts("第一次考试的分数：");mat_printf(a[0]);
    puts("第二次考试的分数：");mat_printf(a[1]);
    puts("总分数：");mat_printf(sum);
    return 0;
}