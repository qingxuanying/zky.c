#include <stdio.h>
int main(void)
{
    float a;
    double b;
    long double c;
    printf("float      :");scanf("%f",&a);
    printf("double     :");scanf("%lf",&b);
    printf("long double:");scanf("%Lf",&c);
    printf("\nfloat      :%.9f\n",a);
    printf("double     :%.9f\n",b);
    printf("long double:%.9Lf\n",c);
    return 0;
}