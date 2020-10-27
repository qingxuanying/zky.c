#include <stdio.h>
int main(void)
{
    float a;
    double b;
    long double c;
    printf("float      :");scanf("%f",&a);
    printf("double     :");scanf("%lf",&b);
    printf("long double:");scanf("%Lf",&c);

    printf("\n长度float         :%d",sizeof(a));
    printf("\n长度double        :%d",sizeof(b));
    printf("\n长度long double   :%d",sizeof(c));

    return 0;
}
