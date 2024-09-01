#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,gecici,birlerBasamagi,onlarBasamagi,yuzlerBasamagi,binlerBasamagi;
    int dizi;
    int toplam=0;
    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);

    i=0;
    gecici=sayi;
    if(sayi>0)
    {
        birlerBasamagi=sayi%10;
        onlarBasamagi=(sayi/10)%10;
        yuzlerBasamagi=(sayi/100)%10;
        binlerBasamagi=(sayi/1000)%10;

        printf("Birler : %d\n",birlerBasamagi);
        printf("Onlar : %d\n",onlarBasamagi);
        printf("Yuzler : %d\n",yuzlerBasamagi);
        printf("Binler : %d\n",binlerBasamagi);
    }
    else
    {
        printf("Sayi negatif bir sayidir.");
    }


    return 0;
}
