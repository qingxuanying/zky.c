#include<stdio.h>
 
int main ()
{
	char c[3];/*字符变量规定大小*/
	int n,i,j,k,t=0;
	scanf("%d",&n);
	scanf("%s",c);
	//printf("%s",c);
	for(i=0;i<n;i++)
	{
        //第一行
		if(i==0)
		{
			for(j=0;j<n;j++)
				printf("%s",c);
				printf("\n");
				t++;
		}
	    //中间行
		else if(i%2==0)
		{
			printf("%s",c);
			for(k=0;k<n-2;k++)
				printf(" ");
			printf("%s\n",c);
			t++;
		}
		if(t==(n+1)/2-1)
			break;	
	}
        //末尾行
	for(j=0;j<n;j++)
		printf("%s",c);
		printf("\n");
	return 0;
}