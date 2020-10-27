#include <math.h>
#include <stdio.h>
double dist(double a)
{
    return sqrt(a);
}
int main(void)
{
    float a;
    printf("该正方形面积是：");
    scanf("%f", &a);
    printf("该正方形的边长是：%lf", dist(a));
    return 0;
}