#include <stdio.h>
int main(void)
{
    int a,b,c,i,j;
    printf("让我们来画一个长方形。");
    printf("一边长：");scanf("%d",&a);
    printf("另一边长：");scanf("%d",&b);
    if(a>b){
        c=b;
        b=a;
        a=c;
    }
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            putchar('*');
        }putchar('\n');
    }
    printf("\n\n\\n");
}