#include <stdio.h>
#include <stdlib.h>

int main()
{
    int enKucukSayi = 0;
    int enBuyukSayi = 0;
    int i = 0;
    int toplam = 0;
    int sayi;

    while ( i < 3)
    {
        printf("Lutfen pozitif tam sayi giriniz.\n");
        scanf("%d",&sayi);
        if(i==0 || enKucukSayi>=sayi)
        {
            enKucukSayi=sayi;
        }
        i++;
    }
    printf("%d sayisi en kucuktur.\n",enKucukSayi);
    printf("i sayisinin son hali:%d\n",i);

    int j = 0;
    while ( j < 3)
    {
        printf("Lutfen pozitif tam sayi giriniz(En buyuk sayiyi bulmak icin.)\n");
        scanf("%d",&sayi);
        if(sayi>enBuyukSayi)
        {
            enBuyukSayi=sayi;
            toplam=toplam+enBuyukSayi+enKucukSayi;
        }
        j++;

    }
    printf("%d sayisi en buyuktur.\n",enBuyukSayi);
    printf("%d+%d=%d\n",enKucukSayi,enBuyukSayi,toplam);

    return 0;
}
