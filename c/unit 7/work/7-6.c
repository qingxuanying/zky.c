#include <stdio.h>
int main(void)
{
    int a;
    unsigned b;
    printf("int a:");
    scanf("%d",&a);
    printf("unsigned b:");
    scanf("%u",&b);
    
    printf("\nint型数据溢出时：%d",a+2147483647);
    printf("\nunsigned型数据不会溢出：%u",b+2147483647);
    return 0;
}