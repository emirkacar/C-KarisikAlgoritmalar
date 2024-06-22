#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int secim;
    while(secim!=5)
    {
        printf("Lutfen bir secenek secin.1:Toplama 2:Cikartma 3:Carpma 4:Bolme 5:Cikis\n");
        scanf("%d",&secim);
        printf("Lutfen x ve y sayilarini giriniz.\n");
        scanf("%d%d",&x,&y);
        if ( secim !=5)
        {
            if(secim==1)
            {
                printf("Toplama sonucu:%d\n",(x+y));
            }
            else if ( secim == 2)
            {
                printf("Cikartma sonucu:%d\n",(x-y));
            }
            else if ( secim == 3)
            {
                printf("Carpma sonucu : %d\n",(x*y));
            }
            else if(secim ==4)
            {
                printf("Bolme sonucu:%d\n",(x/y));
            }
        }
    }

    return 0;
}
