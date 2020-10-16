#include <stdio.h>
int main(void)
{
    int i,j,no,a;
    printf("  ");
    for(i=1;i<=9;i++){
        printf("%3d",i);
    }
    printf("\n");
    printf("  ");
    for(i=1;i<=9;i++){
        printf("---");
    }
    printf("\n");
    for(i=1;i<=9;i++){
        printf("%d",i);
        for(j=1;j<=9;j++){
            if(j==1){
                printf("|");
            }
            printf("%3d",j*i);
        }
        printf("\n");
    }
    return 0;
} 