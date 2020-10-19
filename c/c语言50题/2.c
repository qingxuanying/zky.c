#include <stdio.h>
int main(void)
{
    int a,b;
    printf("请输入成绩。");
    printf("课A：");scanf("%d",&a);
    printf("课B：");scanf("%d",&b);
    if(a<0||b<0){printf("it is error");}
    else{
        switch(a/10){
            case 10 :
            case 9 :
            case 8 :
            case 7 :
            case 6 : 
            switch(b/10){
                case 10 :
                case 9 :
                case 8 :
                case 7 :
                case 6 :printf("it is pass");break;
                default:printf("it is not pass");break;
            }; break;
            default : printf("it is not pass");break;        
        } 
    }
    printf("\n");
    return 0;
}