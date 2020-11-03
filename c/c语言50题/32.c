#include <stdio.h>
int main(void)
{
    int x,b,s,g,i;
    printf("输入一个整数：");
    scanf("%d",&x);
    g=x%10;
    s=(x/10)%10;
    b=(x/100)%10;
    for(i=0;i<b;i++){
        printf("B");
    }
    for(i=0;i<s;i++){
        printf("S");
    }
    for(i=0;i<g;i++){
        printf("%d",i+1);
    }
    return 0;
}