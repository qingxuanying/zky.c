#include<stdio.h>
void main()
{
    for(int i=1;i<=9;i++){
        for(int j=1;j<=i;j++){
            printf(" %2d*%d=%2d",i,j,i*j);
        }
        putchar('\n');
    }
}