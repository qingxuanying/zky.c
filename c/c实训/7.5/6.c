#include<stdio.h>
int main()
{
    int n=0,a,b,c;
    for(a=0;a<5;a++){
        for(b=0;b<5;b++){
            if(a==b){
                continue;
            }
            for(c=0;c<5;c++){
                if(c==b || c==a){
                    continue;
                }
                n++;
            }
        }
    }
    printf("共%d种",n);
}