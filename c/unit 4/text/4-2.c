#include <stdio.h>
int main(void)
{
    int a;
    do
    {
        printf("请选择你要出什么【0...石头/1....剪刀/2....布】：\n");
        scanf("%d",&a);
    } while (a<0||a>2);
    printf("你选择了");
    switch(a){
        case 0 :printf("石头\n");break;
        case 1 :printf("剪刀\n");break;
        case 2 :printf("布\n");break;
    }
    return 0;
}