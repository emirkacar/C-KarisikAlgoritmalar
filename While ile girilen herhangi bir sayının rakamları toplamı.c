#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Lutfen bir tam sayi giriniz.\n");
    scanf("%d",&sayi);
    int toplam = 0;
    int sayininIlkDegeri;

    while(sayi > 9)
    {

        toplam+=sayi%10;
        sayi=sayi/10;
    }
    toplam+=sayi;
    printf("%d sayisinin rakamlari toplami : %d",sayininIlkDegeri,toplam);

    return 0;
}
