#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int i;
    int x,y,z;

    printf("Kac tane fibonnaci sayisi gormek istiyorsunuz? ");
    scanf("%d",&sayi);

    i=1;
    x=0;
    y=1;
    while(i<=sayi)
    {
        if(i==1)
        {
            printf("%d ",x);
            i++;
            continue;
        }
        if(i==2)
        {
            printf("%d ",y);
            i++;
            continue;
        }
        z=x+y;
        x=y;
        y=z;
        i++;
        printf("%d ",z);
    }


    return 0;
}
