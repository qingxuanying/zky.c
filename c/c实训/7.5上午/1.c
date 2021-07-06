#include<stdio.h>
int main()
{
    char s[100],ch;
    int flag=0,n=0;
    printf("请输入字符串:");
    while(1){
        ch=getchar();
        s[n]=ch;
        n++;
        if(ch == '#'){
            break;
        }
    }
    for(int i=0;i<100;i++){
        if(s[i]=='a' || s[i] =='e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            flag++;
        }
    }
    printf("\nResult:%d\n",flag);
}