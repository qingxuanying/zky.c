#include <stdio.h>
int main(void)
{
    int a,b,c,max,min,zg,zk;
    printf("请输入三个数");
    printf("数a：");scanf("%d",&a);
    printf("数b：");scanf("%d",&b);
    printf("数c：");scanf("%d",&c);
    /*找到最大值*/
    max =a;
    if(b>max){
        max =b;
    }
    if(c>max){
        max=c;
    }
    /*找到最小值*/
    min=a;
    if(b<min){
        min=b;
    }    
    if(c<min){
        min=c;
    }
    /*找到中间值*/
   zg=a;
   if(a>b&&b>c){zg=b;}
   if(c>b&&b>a){zg=b;}
   if(b>a&&a>c){zg=a;}
   if(c>a&&a>b){zg=a;}
   if(a>c&&c>b){zg=c;}
   if(b>c&&b<c){zg=c;}
   /*判断*/
   printf("最小值：%d\n",min);
   printf("最大值：%d\n",max);
   printf("中间值：%d\n",zg);
   zk = zg + min;
    if(zk<=max){printf("无法构成三角形。");}
        else if(max==min){printf("正三角");}
        else if(zg==max||zg==min){printf("等腰三角");}
        else{printf("任意三角形");}
    return 0;    
}