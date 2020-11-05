#include <stdio.h>
int huaquan(void){
    int a1,a2,b1,b2,sum;
    printf("甲喊：");scanf("%d",&a1);
    printf("甲划：");scanf("%d",&a2);
    printf("乙喊：");scanf("%d",&b1);
    printf("乙划：");scanf("%d",&b2);
    sum=a1+b1;
    if(a2==sum){
        printf("甲胜\n");
    }
    else if(b2==sum){
        printf("乙胜\n");
    }
    else{
        printf("无人胜利，进行下一局\n");
        huaquan();
    }
    return 0;
}
int main()
{
    huaquan();
    return 0;
}