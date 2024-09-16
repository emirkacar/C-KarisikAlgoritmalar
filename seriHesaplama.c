#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int tamSayi,i;
    float seri=0;
    float reelSayi;
    char karakter;

    printf("Tam sayiyi giriniz: ");
    scanf("%d",&tamSayi);
    printf("Reel sayiyi giriniz: ");
    scanf("%f",&reelSayi);
    i=1;
    while(i<=2*tamSayi-1)
    {
        seri += (float)i/pow(reelSayi,i+1);
        i+=2;
        if(i>(2*tamSayi)-1)
        {
            printf("%.2f",seri);
            printf("Devam edecek misiniz?");
            scanf(" %c",&karakter);
            if(karakter=='e' || karakter=='E')
            {
                printf("Tam sayiyi giriniz: ");
                scanf("%d",&tamSayi);
                printf("Reel sayiyi giriniz: ");
                scanf("%f",&reelSayi);
                i=1;
                seri=0;
            }
            if(karakter=='T' || karakter=='t')
            {
                printf("Hoscakalin\n");
                break;
            }
        }
    }
    return 0;
}
