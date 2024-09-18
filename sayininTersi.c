#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int sayi,kalan,sayininTersi=0,sayac=0,gecici;
    printf("Sayi: ");
    scanf("%d",&sayi);
    gecici=sayi;
    while(gecici!=0)
    {
        sayac+=1;
        gecici/=10;
    }
    printf("Orijinal sayi = %d\n",sayi);
    printf("Sayac = %d\n",sayac);
    while(sayi!=0)
    {
        kalan=sayi%10;
        sayininTersi+=kalan*pow(10,sayac-1);
        sayi/=10;
        sayac--;
    }
    printf("Sayinin tersi = %d",sayininTersi);

    return 0;
}
