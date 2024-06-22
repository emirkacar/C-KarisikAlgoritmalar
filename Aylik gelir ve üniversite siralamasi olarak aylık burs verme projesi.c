#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Aylik gelire verya universite siralamasina gore burs verme projesi.
    int aylikGelir;
    int universiteSiralama;

    printf("Lutfen aylikgelirinizi giriniz.\n");
    scanf("%d",&aylikGelir);

    printf("Lutfen universite siralamanizi giriniz.\n");
    scanf("%d",&universiteSiralama);

    if (aylikGelir<=10000 || universiteSiralama<=3000)
    {
        printf("Bu ogrenciye burs verilecek.\n");
    }
    else
    {
        printf("Bu ogrenciye burs verilmeyecek.\n");
    }
    return 0;
}
