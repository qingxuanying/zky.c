#include <stdio.h>
void del_digit(char s[]){
    int i,j;
    char v[128];
    i=j=0;
    while(s[i]!='\0'){
        if(s[i]<'0'||s[i]>'9'){
            v[j]=s[i];
            j++;
        }
        i++;
    }
    i=0;
    while(v[i]){
        putchar(v[i]);
        i++;
    }
}
int main(void)
{
    char str[128];
    printf("输入字符串：　");
    scanf("%s",str);
    del_digit(str);
    printf("\n");
    return 0;
}