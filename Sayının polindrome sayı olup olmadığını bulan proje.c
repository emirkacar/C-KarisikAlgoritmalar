#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi;
   int toplam=0;
   int basamakDegeri;
   int i = 0;

   printf("Sayiyi giriniz.\n");
   scanf("%d",&sayi);
   int gecici=sayi;





   while(gecici !=0)
   {

       basamakDegeri=gecici%10;
       toplam=toplam*10+basamakDegeri;
       gecici=gecici/10;
       i++;

   }

   if(toplam==sayi)
   {
       printf("%d sayisi polindrome sayidir.\n",sayi);
   }
   else
   {
       printf("%d sayisi polindrome sayi degildir.\n",sayi);
   }



    return 0;
}
