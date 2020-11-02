#include <stdio.h>
int main(void)
{
    int i,j,ch;
    int cnt={0};
    while(1){
		ch = getchar();
		if (ch == EOF) break;
		
		switch (ch){
		case '0' : cnt++; break;
		case '1' : cnt++; break;
		case '2' : cnt++; break;
		case '3' : cnt++; break;
		case '4' : cnt++; break;
		case '5' : cnt++; break;
		case '6' : cnt++; break;
		case '7' : cnt++; break;
		case '8' : cnt++; break;
		case '9' : cnt++; break;
		}
	}
    printf("\n%d\n",cnt);
}