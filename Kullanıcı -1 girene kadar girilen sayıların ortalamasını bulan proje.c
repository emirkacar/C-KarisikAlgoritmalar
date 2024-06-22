#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int sayi;
    float ortalama=0;

    while(sayi!=-1)
    {
        printf("Lutfen sayi giriniz.\n");
        scanf("%d",&sayi);
        if(sayi!=-1)
        {
            ortalama=(sayi/2);
            printf("Sayinin ortalamasi:%f\n",ortalama);
        }
        if(sayi==-1)
        {
            sayi=-1;
        }


        i++;
    }
    printf("i'nin son degeri:%d\n",i);
    printf("Sayinin son degeri:%d\n",sayi);
    return 0;
}
