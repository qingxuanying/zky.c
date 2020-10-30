#include <stdio.h>
int gcd(int x,int y){
    if(x%y==0){
        return y;
    }
    else{
        return gcd(y,x%y);
    }
}
int main(void)
{
    int a,b;
    printf("type n :");scanf("%d",&a);
    printf("type r :");scanf("%d",&b);
    printf("gcd(n,r)= :%d",gcd(a,b));
    return 0;
}