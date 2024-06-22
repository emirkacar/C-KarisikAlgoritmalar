#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int n = 0;
    int toplam = 0;
    int ortalama = 0;
    int i = 0;
    while (sayi!=-1)
    {
        printf("Lutfen sayilari giriniz.\n");
        scanf("%d",&sayi);
        if(sayi==-1)
        {
            sayi=-1;
            break;

        }

        n++;
        toplam+=sayi;
        ortalama=toplam/n;
        i++;


    }
    printf("n:%d toplam:%d ortalama:%d",n,toplam,ortalama);
    return 0;
}
