#include <stdio.h>
int combination(int n,int r)
{
    int c;
    if(r==0 || n==r){
        return 1;
    }
    else
    {
        return combination(n-1,r-1)+combination(n-1,r);
    }
}
int main(void)
{
    int a,b;
    printf("type n :");scanf("%d",&a);
    printf("type r :");scanf("%d",&b);
    printf("c(n,r)= :%d",combination(a,b));
    return 0;
}