#include "stdio.h"


int main(void)
{
    int n = 0;/*记录输出了几次*/
    int i,j;
    for(i = 0; i <= 100; i++){
        /*如果i的值是2或三输出i*/
        if (2 == i || 3 == i){
            printf("%4d", i);
            n++;
        }
        /*令j从2开始递增并用每一个i去除以j*/
        for(j = 2; j <= i / 2; j++){
            if(0 == i % j)
                break;/*如果i除尽了j泽结束if并跳出该子循环即使i+1*/
            if(i / 2 == j){
                printf("%4d", i);/*因为i是int型，所以当i/2=j时，即在前j个都未除尽则说明i是素数*/
                n++;  /*每输出一个值令n的值加一*/
            }
            /*每输出5个则换行*/
            if(5 == n){
                n = 0;
                printf("\n");
            }
        }
    }

    return 0;
}