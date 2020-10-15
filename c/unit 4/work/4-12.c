#include <stdio.h>
int main(void)
{
    int no,i,a;
    i=0;
    do{
        printf("请输入一个正整数:");scanf("%d",&no);
        a=no;
        if(no<=0){
            puts("请不要输入非正整数。");
        }}while(no<=0);    
    while(no>0){
            no /= 10;
            i++;
        }
    printf("%d的位数是%d。\n",a,i);
    return 0;
}