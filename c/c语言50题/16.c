#include <stdio.h>
int main(void)
{
    int i,j,ch;
    int cnt[10]={0};
    printf("请输入你想输入的单词组：\n");
    while(1){
		ch = getchar();
		if (ch == EOF) break;
		
		switch (ch){
		case 'a' : cnt[0]++; break;
		case 'e' : cnt[1]++; break;
		case 'i' : cnt[2]++; break;
		case 'o' : cnt[3]++; break;
		case 'u' : cnt[4]++; break;
		/*case '5' : cnt[5]++; break;
		case '6' : cnt[6]++; break;
		case '7' : cnt[7]++; break;
		case '8' : cnt[8]++; break;
		case '9' : cnt[9]++; break;*/
		}
	}
    printf("统计各个元音字母出现的次数。\n");
    
    printf("a: %d\n",cnt[0]);
    printf("b: %d\n",cnt[1]);
    printf("c: %d\n",cnt[2]);
    printf("d: %d\n",cnt[3]);
    printf("e: %d\n",cnt[4]);

    printf("\n");
    return 0;
}