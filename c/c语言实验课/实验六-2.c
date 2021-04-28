#include<stdio.h>
#include<string.h>
void main()
{
    int num[5];
    int i=0;
    char ch;
    printf("输入一个五位整数：");
    while(1){
        ch=getchar();
        if('0'<=ch && ch<='9'){
            num[i]=ch;
            i++;
        }
        else
        {
            printf("请输入五位整数：");
            i=0;
        }
        
        if(i==5){
            break;
        }
    }

   /* for(int i=0;i<5;i++){
        printf("%d\n",num[i]);
    }*/

  //  printf("%c\n",ch);
    
    if(num[0]==num[4] && num[1]==num[3] ){
        printf("ｎ是一个回文数\n\n");
    }
    else
    {
        printf("ｎ不是一个回文数\n\n");
    }
    

}