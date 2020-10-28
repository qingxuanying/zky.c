#include <stdio.h>
int main(void)
{
    int n;
    printf("input positive　integer: ");scanf("%d",&n);
    int path;
    path=0;
    while(n!=1){
        path++;
        switch(n%2){
            case 0:n=n/2;break;
            case 1:n=3*n+1;n=n/2;break;
        }
    }
    printf("path: %d",path);
    printf("\n");
    return 0;
}