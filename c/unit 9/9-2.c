#include <stdio.h>
int main(void)
{
     char str[]="ABC";
    printf("字符串str: \"%s\" \n",str);
    str[0]='\0';
    printf("更改后字符串str: \"%s\" \n",str);
    return 0;
}