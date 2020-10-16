#include <stdio.h>
int main(void)
{
    int i,j,len;
    puts("让我们来画一个向下的金字塔。");
    printf("金字塔有几层：");scanf("%d",&len);
    for(i=1;i<=len;i++){
         for(j=0;j<=i;j++){
            putchar(' ');
        }
            for(j=0;j<=2*len-2*i;j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}