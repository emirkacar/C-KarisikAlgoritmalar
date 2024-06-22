#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi;
   int basamak=0;
   int ters=0;
   int toplam=0;

   printf("Lutfen tam sayi giriniz.\n");
   scanf("%d",&sayi);
   while(sayi!=0)
   {
       basamak=sayi%10;
       toplam+=basamak;
       ters=ters*10+basamak;
       sayi=sayi/10;




   }
   printf("Basamak degerlerin toplami:%d\n",toplam);
   printf("Sayinin tersi:%d",ters);


    return 0;
}
