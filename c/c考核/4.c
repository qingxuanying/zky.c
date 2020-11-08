#include <stdio.h>
int n_2(int n){
    int l=1;
    for(int i=0;i<n;i++){
        l=l*2;
    }
    return l;
}
/*用以求2的n次方，因为deepin系统无法用math.h库函数..*/
int main(void)
{
    int n;
    printf("有多少个块：");scanf("%d",&n);
    printf("一共需要%d步",n_2(n)-1);
    //由数学论证，n个块在三个柱子下需要移动2的n次方-1下
    //具体论证由数学归纳法可证.....
    return 0;
}