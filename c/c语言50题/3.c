#include <stdio.h>
int main(void)
{
    int i,j,k;
    for(i=1;i<=3;i++){
         for(j=0;j<=i;j++){
            putchar(' ');
        }
            for(j=0;j<=2*3-2*i;j++){
            putchar('*');
        }
        putchar('\n');
    }
    for(i=1;i<=2;i++){
        for(j=0;j<=3-i;j++){
            putchar(' ');
        }
        for(j=1;j<=(i*2+1);j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}