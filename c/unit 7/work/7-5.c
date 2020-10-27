#include <stdio.h>
int count_bits(unsigned x){
    int bits=0;
    while(x){
        if(x & 1U) bits++;
        x >>= 1;
    }
    return bits;
}
int int_bits(void){
    return count_bits(~0U);
}
unsigned set_n(unsigned x, int pos , int n)
{
    int i;
     for(i=int_bits()-1;i>=0;i--)
    {
        if(i>int_bits()-pos-n+1 && i<int_bits()-pos)
        {
            putchar('1');
        }
        else putchar(((x>>i) & 1U) ? '1':'0');
    }
}
unsigned reset_n(unsigned x, int pos , int n)
{
     int i;
     for(i=int_bits()-1;i>=0;i--)
    {
        if(i>int_bits()-pos-n+1 && i<int_bits()-pos)
        {
            putchar('0');
        }
        else putchar(((x>>i) & 1U) ? '1':'0');
    }
}
unsigned inverse_n(unsigned x , int pos , int n)
{
    int i;
    for(i=int_bits()-1;i>=0;i--)
    {
        if(i>int_bits()-pos-n+1 && i<int_bits()-pos)
        {
            putchar(((x>>i) & 1U) ? '0':'1');
        }
        else putchar(((x>>i) & 1U) ? '1':'0');
    }
}
int main(void)
{
    unsigned x;
    int k,m;
    printf("请输入一个整数：");scanf("%u",&x);
    printf("请输入要对几个数位进行操作：");scanf("%d",&m);
    printf("对它的二进制第几位进行操作：");scanf("%d",&k);
    printf("\n将该位变为１后的值　：");set_n(x,k,m);
    printf("\n将该位变为０后的值　：");reset_n(x,k,m);
    printf("\n对该位进行取反后的数：");inverse_n(x,k,m);
    printf("\n\n");
    return 0;
}