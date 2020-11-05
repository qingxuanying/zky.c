#include <stdio.h>
int str_chnum(const char s[],int c){
    int i,conut;
    conut=0;
    for(i=0;i<128;i++){
        if(*s++=='c'){
            conut++;
        }
    }
    return conut;
}
int main(void)
{
    char str[128];
    char c='c';
    printf("输入字符串：　");
    scanf("%s",str);
    printf("你输入的字符串：\"%s\" \n",str);
    printf("c的数量：%d",str_chnum(str,c));
    return 0;
}