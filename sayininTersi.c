#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,kalan;
    int gecici;
    int tersSayi=0;

    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);

    if(sayi>=0)
    {
        gecici=sayi;
        while(gecici!=0)
        {
            kalan=gecici%10;
            tersSayi=tersSayi*10+kalan;
            gecici/=10;
            i++;
        }
        printf("%d sayisinin tersi = %d",sayi,tersSayi);
    }
    else
    {
        printf("Negatif sayilarin tersi alinamaz.");
    }
    return 0;
}
