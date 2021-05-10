#include<stdio.h>
#include<string.h>
void main()
{
    char num[4];
    int i=0;
    char ch;
    printf("输入一个四位整数：");
    while(1){
        ch=getchar();
        if('0'<=ch && ch<='9'){
            num[i]=ch;
            i++;
        }
        else
        {
            printf("\n请重新输入一个四位整数：");
            i=0;
        }
        if(num[0]=='0'){
            printf("\n请重新输入一个四位整数：");
            i=0;
        }
        if(i == 4){
            break;
        }
        
    }
    printf("逆序输出:");
    for(int i=0;i<4;i++){
        printf("%c",num[3-i]);
    }
    
    printf("\n");
    //排序
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(num[i]>num[j]){
                ch=num[i];
                num[i]=num[j];
                num[j]=ch;
            }
        }
    }

    printf("组成的最大数是:");
     for(int i=0;i<4;i++){
         printf("%c",num[3-i]);
     }
      printf("\n");

      printf("组成的最小的数是:");
    for(int i=0;i<4;i++){
         printf("%c",num[i]);
     }

    
    

}