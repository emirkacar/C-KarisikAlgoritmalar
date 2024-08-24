#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,ondalik;
    int toplam=0;

    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);

    while(sayi > 0)
    {
        ondalik = sayi % 10;
        sayi/=10;
        toplam+=ondalik;
    }
    printf("Toplam sonucu = %d",toplam);

    return 0;
}
