#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    int x,y;
    printf("X degerini giriniz.\n");
    scanf("%d",&x);

    printf("Y degerini giriniz.\n");
    scanf("%d",&y);

    printf("Lutfen seciminizi giriniz.1:Toplama 2:Cikartma 3:Carpma 4:Bolme\n");
    scanf("%d",&secim);
    switch(secim)
    {
        case 1:
            printf("%d + %d = %d",x,y,(x+y));
            break;

        case 2:
            printf("%d - %d = %d",x,y,(x-y));
            break;

        case 3:
            printf("%d * %d = %d",x,y,(x*y));
            break;
        case 4:
            printf("%d / %d = %d",x,y,(x/y));
            break;

        default:
            printf("1-4 arasinda bir secim yapmadýnýz.\n");
            break;

    }

    return 0;
}
