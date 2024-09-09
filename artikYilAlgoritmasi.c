#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,birler,onlar,artikYil;
    artikYil=0;

    printf("Sayinizi giriniiz: ");
    scanf("%d",&sayi);

    if(sayi%4==0)
    {
        artikYil=1;
        if(sayi%100==0)
        {
            artikYil=0;
            if(sayi%400==0)
            {
                artikYil=1;
            }
        }
    }
    if(artikYil)
    {
        printf("%d sayisi artik yildir.",sayi);
    }
    else
    {
        printf("%d sayisi artik yil degildir.",sayi);
    }


    return 0;
}
