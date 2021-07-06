#include<stdio.h>
int main()
{
    int sum,n,f;
    f=1;n=1;sum=0;
    for(int i=0;i<100;i++){
        sum=sum+n;
        f=-f;
        n=f*(++n);
    }
    printf("%d",sum);
    return 0;
}