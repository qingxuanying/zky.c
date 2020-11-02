#include <stdio.h>
int main(void)
{
    float Q;
    int N;
    char ch;
    while(scanf("%.2f  %d",&Q,&N)&&N>=0)
    {
        int l=Q*100;/*使浮点数变为整数*/
        int i,j,k;
        i=-1;j=-1;
        int sum[3]={0};
        int A[100],B[100],C[100];
        A[100]=B[100]=C[100]=0;
            while(ch=getchar()!=EOF){
                switch(ch){
                    i++;
                    case 'A' :scanf("%d",&A[i]);
                        break;
                    case 'B' :scanf("%d",&B[i]);
                        break;
                    case 'C' :scanf("%d",&C[i]);
                        break;
                }
            }
        for(j=0;j<i+2;j++){
            sum[0]=A[j]+B[j]+C[j];
        }


    }
}