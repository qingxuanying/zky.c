#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个整数:");scanf("%d",&no);
    switch (no%3)
    {
    case 0:puts("该数能被3整除。");break;
    case 1:puts("该数除以3余1");break;
    case 2:puts("该数除以3余2");break;
    }
    return 0;
}