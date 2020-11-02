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
		case '0' : cnt[0]++; break;
		case '1' : cnt[1]++; sum = sum+1;break;
		case '2' : cnt[2]++; sum = sum+2;break;
		case '3' : cnt[3]++; sum = sum+3;break;
		case '4' : cnt[4]++; sum = sum+4;break;
		case '5' : cnt[5]++; sum = sum+5;break;
		case '6' : cnt[6]++; sum = sum+6;break;
		case '7' : cnt[7]++; sum = sum+7;break;
		case '8' : cnt[8]++; sum = sum+8;break;
		case '9' : cnt[9]++; sum = sum+9;break;
		}
	}
    printf("sum:%d",sum);
	/*个位*/
	int ge;
	ge=sum%10;
	/*十位*/
	int shi;
	shi=(sum/10)%10;
	/*百位*/
	int bai;
	bai=(sum/100)%10;/*因为ｎ小于１０的１００次方，即最多一百位数，ｓｕｍ最大为９９９*/
    putchar('\n');
	switch(bai){
		case 1:printf("yi  ");break;
		case 2:printf("er  ");break;
		case 3:printf("san ");break;
		case 4:printf("si  ");break;
		case 5:printf("wu  ");break;
		case 6:printf("niu ");break;
		case 7:printf("qi  ");break;
		case 8:printf("ba  ");break;
		case 9:printf("jiu ");break;
	}	
	if(bai==0){
	    switch(shi){
		    case 1:printf("yi  ");break;
		    case 2:printf("er  ");break;
		    case 3:printf("san ");break;
		    case 4:printf("si  ");break;
		    case 5:printf("wu  ");break;
	    	case 6:printf("niu ");break;
		    case 7:printf("qi  ");break;
		    case 8:printf("ba  ");break;
		    case 9:printf("jiu ");break;
	    }	
	}
	else
	{
		switch(shi){
		    case 0:printf("ling  ");break;
		    case 1:printf("yi  ");break;
		    case 2:printf("er  ");break;
		    case 3:printf("san ");break;
		    case 4:printf("si  ");break;
		    case 5:printf("wu  ");break;
		    case 6:printf("niu ");break;
		    case 7:printf("qi  ");break;
	        case 8:printf("ba  ");break;
		    case 9:printf("jiu ");break;
	    }	
	}
	
	switch(ge){
		case 0:printf("ling  ");break;
		case 1:printf("yi  ");break;
		case 2:printf("er  ");break;
		case 3:printf("san ");break;
		case 4:printf("si  ");break;
		case 5:printf("wu  ");break;
		case 6:printf("niu ");break;
		case 7:printf("qi  ");break;
		case 8:printf("ba  ");break;
		case 9:printf("jiu ");break;
	}	


    return 0;
}