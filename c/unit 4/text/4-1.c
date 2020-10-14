#include <stdio.h>
int main(void)
{
    int retry;
    do{
        int no;
        printf("请输入一个整数:");
        scanf("%d",&no);
        if (no%2)
           puts("这个整数是奇数。");
        else
           puts("这个整数是偶数。");
        printf("要再来一次？[yes....0/ no......9]:") ;
        scanf("%d",&retry);    
    }while(retry==0);\
    return 0;
}