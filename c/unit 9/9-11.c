#include <stdio.h>
#define STR_NUM 5
#define CHA_NUM 128
 
void put_strary(const char s[][CHA_NUM], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{ 
		if (strcmp(s[i], "$$$$$" )== 0)
			break;
		else
			printf("s[%d] = \"%s\"\n", i, s[i]);
	}
}
 
int main(void)
{
	int i;
	char cs[STR_NUM][CHA_NUM];
	for (i = 0; i < STR_NUM; i++)
	{
		printf("cs[%d] = ",i);
		scanf("%s",cs[i]);
		if (strcmp(cs[i], "$$$$$") == 0)
			break;
	}
	put_strary(cs, STR_NUM);
 
	return 0;
}