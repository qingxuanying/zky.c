#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个整数：");
    scanf("%d",&no);
    if(no%3==0)puts("该数能被3整除\n");
    else if(no%3==1)puts("该数除以3余1\n");
    else puts("该数除以3余2\n");
    return 0;
}