#include <stdio.h>
int main(void)
{
    int i,no;
    i=1;
    printf("请输入一个正整数：");
    scanf("%d",&no);
    if(no>=0){
    if(no%2==0){
         no=no/2;
         while(i<=no){
            putchar('+');
            putchar('-');
            i++;
        }
        printf("\n");
    }
    else {
        no=no/2;
        while(i<=no){
            putchar('+');
            putchar('-');
            i++;
        }
        putchar('+');
        printf("\n");
    }
    }
    return 0;
    }