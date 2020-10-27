#include <stdio.h>
#include <limits.h>
int main(void)
{
    printf("char:");
    if(CHAR_MIN!=0){
        puts("yes");
    }
    else{
        puts("no");
    }
    return 0;
}