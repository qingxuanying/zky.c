#include<stdio.h>
#include<math.h>

int conutbit(int m,int i)
{
    if(m/10 != 0){
        return conutbit(m/10,i+1);
    }
    else{
        return i+1;
    }
}
void main()
{
    int n,m,k;
    int tag=0;
    printf("type a number: ");
    scanf("%d",&n);
    m=abs(n);
//    printf("你输入的数的绝对值为:%d\n",m);
    k=conutbit(m,0);
 //   printf("你输入的数共 %d 位\n",k);

    int a[k];
    for(int i=0;m>0;i++){
        a[i]=m%10;
        m=m/10;
    };

    for(int i=0;i<=k/2;i++){
        if(a[i] != a[k-i-1]){
            tag=1;
        }
    }
/*
    //输出a[k]数组
    for(int i=0;i<k;i++){
        printf("%d  ",a[i]);
    }
*/
    if(tag==0){
        printf("你输入的是回文数\n");
    }
    else{
        printf("你输入的不是回文数\n");
    }



}