#include <stdio.h>
int main(void)
{
    int i,j,ch,sum;
    int cnt[10]={0};
    sum=0;
    while(1){
		ch = getchar();
		if (ch == EOF) break;
		
		switch (ch){
		case '0' : cnt[0]++; 
		case '1' : cnt[1]++; sum = sum+1;
		case '2' : cnt[2]++; sum = sum+2;
		case '3' : cnt[3]++; sum = sum+3;
		case '4' : cnt[4]++; sum = sum+4;
		case '5' : cnt[5]++; sum = sum+5;
		case '6' : cnt[6]++; sum = sum+6;
		case '7' : cnt[7]++; sum = sum+7;
		case '8' : cnt[8]++; sum = sum+8;
		case '9' : cnt[9]++; sum = sum+9;
		}
	}
    printf("sum:%d",sum);
    putchar('\n');

    return 0;
}