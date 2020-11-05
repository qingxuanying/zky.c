#include <stdio.h>
int put_stringr(const char s[]){
    int i=0;int cnt;
    cnt =0;
    while(s[i]){
        cnt++;
        i++;
    }
    i=0;
    putchar('\n');
    while(s[i]){
        i++;
        putchar(s[cnt-i]);
    }
}
int main(void)
{
    char str[128];
    printf("输入字符串：　");
    scanf("%s",str);
    put_stringr(str);
    return 0;
}