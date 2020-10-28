#include <stdio.h>
int main(void)
{
    long a,b,c;
    printf("a:");scanf("%ld",&a);
    printf("b:");scanf("%ld",&b);
    printf("c:");scanf("%ld",&c);
    long sum=a+b;
    if(sum<=c){
        printf("false");
    }
    else{
        printf("ture");
    }
    return 0;
}