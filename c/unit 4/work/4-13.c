#include <stdio.h>
int main(void)
{
    int a,b,n,i;
    a=0;b=0;
    printf("整数n的值:");scanf("%d",&n);
    for (i=0;i<n;i++) {
        a++;
        b=b+a;
    }
    printf("1到%d的和是:%d\n",n,b);
    return 0;
}