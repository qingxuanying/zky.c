#include<stdio.h>

int main()
{
    int n,i,x;
    double sum;

    while(~scanf("%d",&n))
    {
        while(n--)
        {
            sum=0;
            scanf("%d",&x);
            for(i = 1; i <= x; i++)
            {
                if(i % 2 == 1)
                {
                    sum += (double)(1.0 / i);
                }
                if(i % 2 == 0)
                {
                    sum -= (double)(1.0 / i);
                }
            }
            printf("%.2f\n",sum);
        }
    }
    return 0;
}