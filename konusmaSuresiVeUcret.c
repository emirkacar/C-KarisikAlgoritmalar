#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dakika,ucret;
    ucret=0;

    printf("Konusma suresi: ");
    scanf("%d",&dakika);

    if(dakika>=0)
    {
        ucret=4;
        if(dakika<=3)
        {
            ucret+=0;
        }
        else
        {
           ucret+=(dakika-3)*1;
        }
    }
    else
    {
        printf("Dakika negatif olamaz.");
    }
    printf("Konusma sureniz:%d\n",dakika);
    printf("Ucret:%d",ucret);

    return 0;
}
