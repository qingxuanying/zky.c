#include <stdio.h>
int main(void)
{
    int i,j,ch,sh;
    int cnt[10]={0};
	int snt[10]={0};
    int A,B,a,b;
    A=B=a=b=0;
    printf("请输入第一串字符A：");
    while((ch=getchar())!=EOF){
		switch (ch){
		case '0' : cnt[0]++; break;
		case '1' : cnt[1]++; break;
		case '2' : cnt[2]++; break;
		case '3' : cnt[3]++; break;
		case '4' : cnt[4]++; break;
		case '5' : cnt[5]++; break;
		case '6' : cnt[6]++; break;
		case '7' : cnt[7]++; break;
		case '8' : cnt[8]++; break;
		case '9' : cnt[9]++; break;
		}
	}
	printf("请输入你想在第一串字符里找到取出的部分:");
    scanf("%d",&a);
    for(i=0;i<cnt[a];i++){
        A=A*10+a;
    }
    printf("请输入第二串字符B：\n");
    while((sh=getchar())!=EOF){
		switch (sh){
		case '0' : snt[0]++; break;
		case '1' : snt[1]++; break;
		case '2' : snt[2]++; break;
		case '3' : snt[3]++; break;
		case '4' : snt[4]++; break;
		case '5' : snt[5]++; break;
		case '6' : snt[6]++; break;
		case '7' : snt[7]++; break;
		case '8' : snt[8]++; break;
		case '9' : snt[9]++; break;
		}
	}
    printf("请输入你想在第二串字符里找到取出的部分:");
    scanf("%d",&b);
    for(i=0;i<snt[b];i++){
        B=B*10+b;
    }
    printf("要求的输出为：%d",A+B);
    return 0;
}