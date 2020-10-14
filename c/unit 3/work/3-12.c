#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个整数");
    scanf("%d",&no);
    switch(no%2)
    {
        case 1:puts("该整数是个奇数。"); break;
        case 2:puts("该整数是个偶数。");break;
    }
}