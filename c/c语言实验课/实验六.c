#include <stdio.h>
void main()
{
    int n,n1,n2,n3,n4,n5;
    n=n1=n2=n3=n4=n5=0;
    
        int i;
        printf("请输入一个五位整数:");
        scanf("%d",&i);
        n=i;
        if(n<10000 || n>99999){
            printf("请输入一个五位整数:");
            exit(-1);
        }

    //个位n1
    n1=n%10;

    //十位
    n2=(n/10)%10;

    //中间位n3
    n3=(n/100)%10;

    //千位n4
    n4=(n/1000)%10;

    //万位
    n5=(n/10000)%10;

    if( (n1==n5) && (n2==n4) ){
        printf("ｎ是一个回文数\n\n");
    }
    else{
        printf("你输入的不是一个回文数\n\n");
    }

}