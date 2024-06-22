#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi = 4829;
    int birler,onlar,yuzler,binler,toplam;

    birler = sayi % 10;
    onlar = ( sayi / 10 ) %10;
    yuzler = ( sayi / 100 ) % 10;
    binler = sayi / 1000;

    toplam = birler+onlar+yuzler+binler;
    printf("Sayinin rakamlari toplami :%d",toplam);





    return 0;
}
