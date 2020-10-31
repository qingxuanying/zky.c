#include<stdio.h>
#define NUM 5
 
int main(void)
{
	int i;
	char s[NUM][128];
	for (i = 0; i < NUM; i++)
	{
		printf("s[%d]:",i);
		scanf("%s",s[i]);
		if (strcmp(s[i], "$$$$$") == 0)//代码显示问题。。。其中srrcmp函数用来比较字符串并更具结果还回值
        /*这里是将我们输入的与”$$$$$$“作比较，如果相等则换回０*/
			break;
	}
	for (i = 0; i < NUM; i++) 
	{
		if (strcmp(s[i], "$$$$$") == 0)//代码显示问题。。。
			break;
		else
			printf("s[%d] = \"%s\"\n",i,s[i]);
	}
	
	return 0;
}