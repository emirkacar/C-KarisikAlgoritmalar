#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    int i;
    int kucukHarfBoyutu;
    int buyukHarfBoyutu;
    int durum=0;
    char kucukHarfler[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','y','z','x'};
    char buyukHarfler[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','V','Y','Z','X'};

    printf("Buyuk harf tipinde bir karakter giriniz: ");
    scanf("%c",&harf);

    kucukHarfBoyutu=sizeof(kucukHarfler)/sizeof(kucukHarfler[0]);
    buyukHarfBoyutu=sizeof(buyukHarfler)/sizeof(buyukHarfler[0]);

    for(i=0;i<buyukHarfBoyutu;i++)
    {
        if(harf==buyukHarfler[i])
        {
            harf=kucukHarfler[i];
            durum=1;

        }
    }
    if(durum==0)
    {
        printf("Kucuk harf girdiniz,tekrar deneyiniz.\n");
    }
    else
    {
        printf("Harfin kucuk hale cevrilmis hali : %c,",harf);
    }

    return 0;
}
