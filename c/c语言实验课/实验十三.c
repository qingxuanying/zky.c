#include <stdlib.h>
#include <stdio.h>
void sort_xuanze(int a[],int n){
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
            }
        }
    }
}

void sort_maopao(int a[],int n){
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]<a[j+1]){
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}

void main()
{
    int a[10]={0},b[10]={0};
    int c[20]={0};
    int i,j,k,tmp;
    printf("输入数组a:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    printf("输入数组b:");
    for(i=0;i<10;i++){
        scanf("%d",&b[i]);
    }

    sort_maopao(a,10);
    sort_xuanze(b,10);

    printf("冒泡排序后的a数组为：");
    for(i=0;i<10;i++){
        printf("%2d ",a[i]);
    }
    putchar('\n');
    printf("选择排序后的b数组为：");
    for(i=0;i<10;i++){
        printf("%2d ",b[i]);
    }
    putchar('\n');
    
    //给c数组赋值
    for(i=0;i<10;i++){
        c[i]=a[i];
        c[10+i]=b[i];
    }

    sort_xuanze(c,20);
    printf("将两个数组合并成一个降序数组为：\n");
    for(i=0;i<20;i++){
        printf("%2d ",c[i]);
    }
    
}