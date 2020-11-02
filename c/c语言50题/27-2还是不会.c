#include <stdio.h>
int panduan(char kind[][1],int n){
    int m=0;
    for(int i;i<n;i++){
        switch(kind[i][1]){
            case 'A':
            case 'B':
            case 'C':break;
            default :m=-100;break;
        }
    }
    if(m<0){
        return -1;
    }
    else{
        return 1;
    }
}
int main()
{
    int q; /*报销限额*/
    int n; //发票张数
    int i,j,k,l;
    printf("有几张发票：");scanf("%d",&n);
    int sum[n];
    int ave=0;
    for(i=0;i<n;i++){
        int m;
        printf("第 %d 张发票有多少物品:",i+1);scanf("%d",&m);
        char kind[m][1];
        int price[m];
        printf("请输入这些物品的种类及对应价格：");
        for(j=0;j<m;j++){
            printf("类：");scanf("%s",kind[i][1]);
            printf("价格：");scanf("%d",&price[j]);
        }
        if(panduan(kind[i][1],m)<0){
            sum[i]=0;
        }
        else{
            for(j=0;j<m;j++){
                sum[i] += price[j];
            }
            if(sum>1000){
                sum[i]=0;
            }
        }
    }
    for(i=0;i<n;i++){
        ave +=sum[i];
    }

    return 0;
}