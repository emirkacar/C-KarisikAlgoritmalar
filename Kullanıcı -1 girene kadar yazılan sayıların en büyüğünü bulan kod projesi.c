#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i = 0;
   int girilenSayi;
   int enBuyukSayi = 0;

   while ( girilenSayi != -1)
   {
       printf("Lutfen bir pozitif tam sayi giriniz.\n");
       scanf("%d",&girilenSayi);
       if ( girilenSayi > enBuyukSayi)
       {
           enBuyukSayi=girilenSayi;
       }

       i++;

   }
   printf("%d sayisi en buyuktur.\n",enBuyukSayi);
    return 0;
}
