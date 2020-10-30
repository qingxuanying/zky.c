#include <stdio.h>
#define max(x,y) (((x) > (y))? (x) : (y) )
int main()
{
    int a,b;
    printf("tapy  a:");scanf("%d",&a);
    printf("typa  b:");scanf("%d",&b);
    printf("max  ==:%d\n",max(a,b));
    return 0;
}