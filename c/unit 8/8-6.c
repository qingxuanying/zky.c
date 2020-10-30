#include <stdio.h>
int factorial(int n)
{
    int i;
    int j=n;
    int ave=1;
    for(i=0;i<j;i++){
        ave=n*ave;
        n=n-1;
    }
    return ave;
}
int main()
{
    int num;
    printf("tpye n: ");scanf("%d",&num);
    printf("n!: %d\n",factorial(num));
    return 0;

}