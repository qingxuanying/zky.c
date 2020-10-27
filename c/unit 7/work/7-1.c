#include <stdio.h>
#include <limits.h>
int main(viod)
{
    int n;

    printf("sizeof 1               =%u\n",sizeof 1);
    printf("sizeof +1              =%u\n",sizeof +1);
    printf("sizeof -1              =%u\n",sizeof -1);

    printf("sizeof (unsigned) -1   =%u\n",(unsigned)sizeof -1);
    printf("sizeof (double) -1     =%u\n",(/*double)*/sizeof (double)-1));
    printf("sizeof ((double) -1)   =%u\n",/*(double)*/sizeof((double)-1));

    printf("sizeof n+2             =%u\n",sizeof n+2);
    printf("sizeof n+2             =%u\n",sizeof n+2);
    printf("sizeof (n+2)           =%u\n",/*(double)*/sizeof((double)(n+2.0)));

    return 0;
}