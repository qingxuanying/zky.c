#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Fish
{
    int id;
    char name[100];
    float price;
}s[5];
int main()
{
    // struct Fish s[5];
    int a,b,c[10],flag=0;
    float sum=0.0;
    for(int i=1;i<=5;i++){
        s[i-1].id=i;
    }
    strcpy(s[0].name,"拍黄瓜");
    s[0].price=11.5;
    strcpy(s[1].name,"地三鲜");
    s[1].price=13.0;
    strcpy(s[2].name,"酸菜鱼");
    s[2].price=25.0;
    strcpy(s[3].name,"呛生菜");
    s[3].price=25.5;
    strcpy(s[4].name,"佛跳墙");
    s[4].price=9.9;

    printf("今日菜品如下:");
    printf("编号    菜名    价格(单位：元)\n");
    for(int i=0;i<4;i++){
        printf("%d",s[i].id);printf("\t");
        printf("%s",s[i].name);printf("\t");
        printf("%.1f",s[i].price);printf("\t");
        printf("\n");
    }
    printf("请输入你的操作编号(1.点餐. 2.退出点餐)：");scanf("%d",&a);
    if(a==2){
        printf("您的菜单为空，欢迎下次点餐\n");
        exit(-1);
    }
   lab: 
    printf("请输入你的菜品编号:");scanf("%d",&b);
    c[flag]=b;flag++;
    printf("是否继续点餐(1.点餐. 2.退出点餐)");scanf("%d",&a);
    if(a==2){
        printf("---------------------------\n");
        printf("您的菜单如下：");
        printf("编号    菜名    价格(单位：元)\n");
        for(int i=0;i<flag;i++){
            printf("%d",s[c[i]].id);printf("\t");
            printf("%s",s[c[i]].name);printf("\t");
            printf("%.1f",s[c[i]].price);printf("\t");
            printf("\n");
            sum+=s[c[i]].price;
        }
        printf("-------------------------\n");
        printf("\t\t\t\t总计：%.1f",sum);
    }
    if(a==1){
        goto lab;
    }

}