#include <stdio.h>
int main(void)
{
    float v[2][2];
    printf("输入这些复数。\n");
    int i,j;
    float ave,tmp;
    for(i=0;i<2;i++){
        printf("请输入第%d个数\n",i+1);
        printf("实数部分：");scanf("%f",&v[i][0]);
        printf("虚数部分：");scanf("%f",&v[i][1]);
    }
    printf("\n");
    printf("第一个复数是：%.2f+%.2fi\n",v[0][0],v[0][1]);
    printf("第二个复数是：%.2f+%.2fi\n",v[1][0],v[1][1]);
    printf("\n他们的乘积是：");
    tmp=(v[0][0]*v[1][0])-(v[0][1]*v[1][1]);
    ave=(v[0][1]*v[1][0])+(v[0][0]+v[1][1]);
    if (ave<0)
    {
        printf("%.2f %.2fi",tmp,ave);
    }
    else
    {
        printf("%.2f + %.2fi",tmp,ave);
    }
    return 0;
}