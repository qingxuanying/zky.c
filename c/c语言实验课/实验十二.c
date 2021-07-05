#include <stdio.h>
#include <stdlib.h>
int is_prime(int n){
    if(n==1){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void main()
{
    int a,b,tmp,tag,k,n=0;
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
        if(is_prime(i)==1){
            printf("%3d ",i);
            n++;
            k++;
        }
        if(k==9){
            printf("\n");
            k=0;
        }
    }

    printf("共%d个",n);
    putchar('\n');
    putchar('\n');

}