#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int toplam=0;
    int i=1;
    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);

    do
    {
        toplam+=i;
        i++;

    }while(i<sayi);
    printf("1'den %d sayisina kadar olan sayilarin toplami : %d",sayi,toplam);
    return 0;
}
