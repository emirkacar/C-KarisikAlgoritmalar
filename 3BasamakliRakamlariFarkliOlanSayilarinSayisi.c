#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i,sayac;
    sayac=0;


    for(i=100;i<=999;i++)
    {
        a=i%10;
        b=(i/10)%10;
        c=(i/100)%10;
        if(a!=b && a!=c && b!=c)
        {
            printf("%d ",i);
            sayac++;
        }
    }
    printf("Sayac sayisi: %d",sayac);

    return 0;
}
