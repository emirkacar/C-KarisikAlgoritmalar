#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Lutfen bir tam sayi giriniz.\n");
    scanf("%d",&sayi);
    int toplam = 0;
    int sayininIlkDegeri = sayi;
    for (; sayi > 9;sayi=sayi/10)
    {

        toplam+=sayi%10;



    }

    toplam+=sayi;
    printf("%d sayisinin rakamlari toplami:%d",sayininIlkDegeri,toplam);


    return 0;
}
