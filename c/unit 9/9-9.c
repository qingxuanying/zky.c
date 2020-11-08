#include <stdio.h>
int put_stringr(char s[]){
    int i=0;int cnt;
    cnt =0;
    while(s[i]){
        cnt++;
        i++;
    }
    char v[cnt];
    i=0;
    while(s[i]){
        v[i]=s[cnt-i];
        i++;
    }
    i=0;
    while(s[i]){
        s[i]=v[i];
        putchar(s[i]);
        i++;
    }
    return 0;
}
int main(void)
{
    char str[128];
    printf("输入字符串：　");
    scanf("%s",str);
    put_stringr(str);
    return 0;
}