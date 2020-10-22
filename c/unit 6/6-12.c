/*#include<stdio.h>
#define M 4            //第一个矩阵的行数 、第二个矩阵的列数 （可根据自己的需要做调整） 
#define N 3            //第一个矩阵的列数 、第二个矩阵的行数（这两个参数不限制，可不一致） 
int main()
{
    int a[M][N],b[N][M],c[M][M]={0};
    
    int i,j,k;
    
    
    puts("请输入矩阵a:"); 
    for(i = 0;i<M;i++)
        for(j = 0;j<N;j++)
            scanf("%d",&a[i][j]);
            
    puts("请输入矩阵b:");
    for(i = 0;i<N;i++)
        for(j = 0;j<M;j++)
            scanf("%d",&b[i][j]);
    
                   
    puts("矩阵a为:");
    for(i = 0;i<M;i++){
        for(j = 0;j<N;j++)
            printf("%d\t",a[i][j]);
        putchar('\n');
    }
            
    puts("矩阵b为:");
    for(i = 0;i<N;i++){
        for(j = 0;j<M;j++)
            printf("%d\t",b[i][j]);
        putchar('\n');
    }
    
    
    for(i = 0;i<M;i++)
        for(j = 0;j<M;j++)
            for(k = 0;k<N;k++)
                c[i][j] += a[i][k]*b[k][j];
    
    
    puts("矩阵a*矩阵b为:");            
    for(i = 0;i<M;i++){
        for(j = 0;j<M;j++)
            printf("%d\t",c[i][j]);
        putchar('\n');
        }
    
    return 0;
}
*/
#include<stdio.h>
#define M 4            //第一个矩阵的行数 、第二个矩阵的列数  
#define N 3            //第一个矩阵的列数 、第二个矩阵的行数
int mat_mul(const int a[M][N],const int b[N][M],int c[M][M])
{
    int i,j,k;
        for(i = 0;i<M;i++){
        for(j = 0;j<M;j++){
            for(k = 0;k<N;k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
        }
    puts("矩阵a*矩阵b为:");            
    for(i = 0;i<M;i++){
        for(j = 0;j<M;j++)
            printf("%d\t",c[i][j]);
        putchar('\n');
        }
    
}
int main(void)
{
    int a[M][N],b[N][M],c[M][M]={0};
    
    int i,j,k;
    
    
    puts("请输入矩阵a:"); 
    for(i = 0;i<M;i++)
        for(j = 0;j<N;j++)
            scanf("%d",&a[i][j]);
            
    puts("请输入矩阵b:");
    for(i = 0;i<N;i++)
        for(j = 0;j<M;j++)
            scanf("%d",&b[i][j]);
    
                   
    puts("矩阵a为:");
    for(i = 0;i<M;i++){
        for(j = 0;j<N;j++)
            printf("%d\t",a[i][j]);
        putchar('\n');
    }
            
    puts("矩阵b为:");
    for(i = 0;i<N;i++){
        for(j = 0;j<M;j++)
            printf("%d\t",b[i][j]);
        putchar('\n');
    }
    mat_mul(a,b,c);
    return 0;
}