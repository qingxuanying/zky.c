#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100],ch;
    int i=0;
    FILE *p;
    while(1){
        ch=getchar();
        if (ch=='#')
        {
            break;
        }
        s[i]=ch;
        i++;
    }
    for(int j=0;j<i;j++){
        printf("%c",s[j]);
    }
    p=fopen("ch.txt","wt");
    if(p==NULL){
        printf("文件打开失败");
        exit(-1);
    }
    fwrite(s,sizeof(char),i,p);

}