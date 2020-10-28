#include <stdio.h>
int main(void)
{
    int year,mounth,day;
    int i,j,temp;
    int a;
    temp=0;
    printf("是哪一年：");scanf("%d",&year);
    printf("是哪一月：");scanf("%d",&mounth);
    printf("是第几号：");scanf("%d",&day);
    if((year %4==0&&year%100!=0)|| year%400==0){
        temp=1;
    }
    switch (mounth)
    {
    case 1:{
        a=day;
        break;
    }
    case 2:{
        a=31+day;
        break;    
    }
    case 3:{
        switch(temp){
            case 0 : a=31+28+day;break;
            case 1 : a=31+29+day;break;
        }
        break;
    }
    case 4:{
         switch(temp){
            case 0 : a=31+28+31+day;break;
            case 1 : a=31+29+31+day;break;
        }
        break;
    }
    case 5:{
         switch(temp){
            case 0 : a=31+28+31+30+day;break;
            case 1 : a=31+29+31+30+day;break;
        }
        break;
    }
    case 6:{
        switch(temp){
            case 0 : a=31+28+31+30+31+day;break;
            case 1 : a=31+29+31+30+31+day;break;
        }
        break;
    }
    case 7:{
        switch(temp){
            case 0 : a=31+28+31+30+31+30+day;break;
            case 1 : a=31+29+31+30+31+30+day;break;
        }
        break;
    }
    case 8:{
         switch(temp){
            case 0 : a=31+28+31+30+31+30+31+day;break;
            case 1 : a=31+29+31+30+31+30+31+day;break;
        }
        break;
    }
    case 9:{
         switch(temp){
            case 0 : a=31+28+31+30+31+30+31+31+day;break;
            case 1 : a=31+29+31+30+31+30+31+31+day;break;
        }
        break;
    }
    case 10:{
        switch(temp){
            case 0 : a=31+28+31+30+31+30+31+31+30+day;break;
            case 1 : a=31+29+31+30+31+30+31+31+30+day;break;
        }
        break;
    }
    case 11:{
        switch(temp){
            case 0 : a=31+28+31+30+31+30+31+31+30+31+day;break;
            case 1 : a=31+29+31+30+31+30+31+31+30+31+day;break;
        }
        break;
    }
    case 12:{
        switch(temp){
            case 0 : a=31+28+31+30+31+30+31+31+30+31+30+day;break;
            case 1 : a=31+29+31+30+31+30+31+31+30+31+30+day;break;
        }
        break;
    }
    }
    printf("该天是该年的第 %d　天",a);
    printf("\n");
    return 0;
}