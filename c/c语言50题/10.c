#include<stdio.h>
#define n 50/*学生人数*/
#define m 5/*课程数*/
int main(void)
{
    int i,j;
    int x,y;
    int a[n][m];
    int b[n];  /* 学生的总分 */
    int c[m];  /* 课程的总分 */
    double d[m];   /* 课程的平均分 */
    double e[n];   /* 学生的平均分 */

    printf("有几门课：");scanf("%d",&x);
    printf("有几名学生：");scanf("%d",&y);
    for (i = 0; i < y; i++)
    {
        for (j = 0; j < x; j++)
        {
            printf("请输入第%d位同学第%d门的成绩: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < x; i++)
    {
        c[i] = 0;
    }
    for (i = 0; i < y; i++)
    {
        b[i] = 0;
    }
    /* 计算各门课程的总分和平均分 */
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            c[i] += a[j][i];
        }
        d[i] = c[i] / y;
        printf("第%d门课程的总分为%d, 平均分为%.2f\n",i + 1, c[i], d[i]);
    }
    /* 计算每位学生的总分和平均分 */
    for (i = 0; i < y; i++)
    {
        for (j = 0; j < x; j++)
        {
            b[i] += a[i][j];
        }
        e[i] = b[i] / x;
        printf("第%d位学生的总分为%d, 平均分为%.2f\n",i + 1, b[i], e[i]);
    }

    return 0;
}