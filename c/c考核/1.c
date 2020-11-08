#include <stdio.h>
#include <ctype.h>
int put_stringr(const char s[]){
    int i=0;
    int cnt=0;
    while(s[i]){
        cnt++;
        i++;
    }
    return cnt;
}
int main(void)
{
    int i,j,k;
    j=k=0;
    char str_1[128];/*应该输入的字符串*/
    char str_2[128];/*实际输入的字符串*/
    printf("请输入应该输入的字符串:");scanf("%s",str_1);
    printf("请输入实际输入的字符串:");scanf("%s",str_2);
    printf("坏掉的键是：");
    for(i=0;i<put_stringr(str_1);i++){
        if(str_1[i]!=str_2[j]){
            //printf("%c",str_1[i]);
            printf("%c",toupper(str_1[i]));
            j--;
        }
        j++;
    }
    printf("\n");
    return 0;
}