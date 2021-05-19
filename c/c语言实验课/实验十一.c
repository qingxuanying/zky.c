#include <stdio.h>
#include <stdlib.h>
void main() 
{
    int a,b,tmp,tag,k;
    printf("输入正整数区间下限a:");
    scanf("%d",&a);
    printf("输入正整数区间上限b:");
    scanf("%d",&b);
    k=0;
    putchar('\n');
    if(a>=b){
        tmp=a;
        a=b;
        b=tmp;
    }
    if(a<0){
        printf("请输入正整数！");
        exit(-1);
    }

    printf("a=%d\n",a);
    printf("b=%d\n",b);
    
    for(int i=a;i<=b;i++){
        tag=1;
        if(i<2){
            i=2;
        }
        for(int j=2;j<i;j++){
            if(i%j==0){
                tag=0;
            }
        }
        if(k==9){
            putchar('\n');
            k=0;
        }
        if(tag==1){
            k++;
            printf("%3d ",i);
        }
    }
    putchar('\n');
    putchar('\n');


}