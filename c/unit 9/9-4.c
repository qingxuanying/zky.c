#include <stdio.h>
void null_string(char str[]){
    *str='\0';
}
int main(void)
{
    char str[128];
    printf("输入字符串：　");
    scanf("%s",str);
    printf("你输入的字符串：\"%s\" \n",str);
    null_string(str);
    printf("变化后：\"%s\"",str);
    return 0;
}