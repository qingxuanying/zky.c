#include<stdio.h>
int main()
{
    int x,n,i,j,flag=0;
    i=1;
    printf("正在运算");
    while(1){
        if(flag==1){
            printf("\n共%d个桃子\n",i);
            break;
        }
        i++;
        if((i-1)%5==0){
            j=i;
            n=j/5;
            j=j-n-1;
            if( (j-1) %5 ==0){
                n=j/5;
                j=j-n-1;
                if((j-1)%5==0){
                    n=j/5;
                    j=j-n-1;
                    if((j-1)%5 == 0){
                        n=j/5;
                        j=j-n-1;
                        if((j-1)%5==0){
                            flag=1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}