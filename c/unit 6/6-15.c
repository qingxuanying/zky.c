#include <stdio.h>
int a;
int put_count(void){
    a++;
    printf("调用该函数%d次 \n",a);
}
int main(void)
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        put_count();
    }
    return 0;
}