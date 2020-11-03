#include <stdio.h>
int a_b(int a,int b){
    if(a%b==0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}
int main(void)
{
    int n,i,a,b;
    printf("几组数据：");scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d  %d",&a,&b);
        a_b(a,b);
    }
    return 0;
}
