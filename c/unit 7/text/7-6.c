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
    unsigned a, b;
    printf("请输入两个整数\n");
    printf("a:");scanf("%u",&a);
    printf("b:");scanf("%u",&b);

    printf("\n a      =");printf_bits(a);
    printf("\n b      =");printf_bits(b);
    printf("\n a & b  =");printf_bits(a & b);
    printf("\n a | b  =");printf_bits(a | b);
    printf("\n a ^ b  =");printf_bits(a ^ b);
    printf("\n ~a     =");printf_bits(~a);
    printf("\n ~b     =");printf_bits(~b);
    putchar('\n');
    return 0;

}