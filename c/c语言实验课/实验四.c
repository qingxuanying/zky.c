#include<stdio.h>
#include<string.h>
void main()
{
    int a;
    printf("type a number: ");scanf("%d",&a);
    printf("输入的数的１６进制是：%#x\n",a);
    int high,low,high2;
    high=(a>>16) & 0x0000ffff;
    low=(a) & 0x0000ffff;

    printf("该数的高16位是%#x,所表示的有符号数是%hd,",high,high);
    if(high % 2==0){
        printf("它是偶数\n");
    }
    else
    {
         printf("它是奇数\n");
    }

    printf("该数的低16位是%#x,所表示的有符号数是%hd,",low,low);
    if(low % 2==0){
        printf("它是偶数\n");
    }
    else
    {
         printf("它是奇数\n");
    }
    
/*    printf("16进制输出高１６位:%#x\n",high);
    printf("16进制输出低１６位:%#x\n",low);

    printf("10有符号进制输出高１６位:%hd\n",high);
    printf("10有符号进制输出低１６位:%hd\n",low);
    //判断奇偶
    if(high % 2==0){
        printf("高16位是偶数\n");
    }
    else
    {
         printf("高16位是奇数\n");
    }
    if(low % 2==0){
        printf("高16位是偶数\n");
    }
    else
    {
         printf("高16位是奇数\n");
    }*/
    


}