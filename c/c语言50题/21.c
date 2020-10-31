#include <stdio.h>
int main(void)
{
    int i,n;
    int step[9999]={0,0,2,2};
    while( scanf("%d",&n)!=0){
        for(i=4; i<1002; i++)
        {
            if(i%2==0){
                step[i]=2*step[i-1]+2;
                }/*啊这，先数学运算然后发现规律，其实好像可以归纳法证明，但我没证*/
            else{
                step[i]=2*step[i-1]-2;
                }
            step[i]=step[i]%10000;
        }
        printf("一共有%d种跳法\n",step[n]%10000);

    }
    return 0;
}