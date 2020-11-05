#include <stdio.h>
int str_char(const char s[],int c){
    int i;
    for(i=0;i<128;i++){
        if(*s++=='c'){
            return i;
        }
    }
    return -1;
}
int main(void)
{
    char str[128];
    char c='c';
    printf("输入字符串：　");
    scanf("%s",str);
    printf("你输入的字符串：\"%s\" \n",str);
    printf("c的位置：%d",str_char(str,c));
    return 0;
}