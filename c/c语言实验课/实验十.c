#include<stdio.h>
#include<string.h>
void main()
{
    int n,n3,i,sum,j,k;
    printf("请输入一个非０正整数n:");
    scanf("%d",&n);
    n3=n*n*n;
    printf("n的三次方为：%d \n",n3);
    if(n<=0){
        printf("输入非法\n");
    }
    for(i=1;;i+=2){
        sum=0;
        j=i;
        for(int x=0;x<n;x++){
            sum=sum+j;
            j=j+2;
        }
        if(sum==n3){
            for(k=i;k<j;k+=2){
                printf("%2d ",k);
            }
            break;
        }
    }
    putchar('\n');
}