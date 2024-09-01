#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tweety='T';
    char bugs = 'B';
    char spiderman = 'S';
    int tMetreKare=18;
    int bMetreKare=17;
    int sMetreKare=19;
    int secim;
    float istenilenMetreKare;
    float fiyat;

    printf("Secim yapiniz.twetty'nin kodu : %c,Bugs'in kodu: %c spiderman'in kodu: %c\n",tweety,bugs,spiderman);
    scanf("%c",&secim);
    printf("Kac metre kare istiyorsunuz? ");
    scanf("%f",&istenilenMetreKare);

    if(secim=='T')
    {
        fiyat=istenilenMetreKare*tMetreKare;
    }
    else if(secim=='B')
    {
        fiyat=istenilenMetreKare*bMetreKare;
    }
    else if (secim=='S')
    {
        fiyat=istenilenMetreKare*sMetreKare;
    }
    else
    {
        printf("Yanlis secim yaptiniz.");
    }
    printf("Fiyat = %.2f",fiyat);



    return 0;
}
