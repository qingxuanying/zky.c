#include <stdio.h>
#include <limits.h>
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
void printf_bits(unsigned x){
    int i;
    for(i=int_bits() -1;i>=0;i--){
        putchar(((x>>i) & 1U) ? '1':'0');
    }
}
int main(void)
{
    unsigned x,n;
    printf("非负整数:");scanf("%u",&x);
    printf("位移位数:");scanf("%u",&n);

    printf("\n整数     = ");printf_bits(x);
    printf("\n左移后的值= ");printf_bits(x<<n);
    printf("\n右移后的值= ");printf_bits(x>>n);
    putchar('\n');
    return 0;
}