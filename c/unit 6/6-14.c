#include <stdio.h>
int main(void)
{
    static double a[5];
    int i,j;
    for(i=0;i<5;i++){
        printf("%.1f\n ",a[i]);
    }
    return 0;
}