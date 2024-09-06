#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float toplam;
    float sonuc;

    printf("n degerini giriniz: ");
    scanf("%d",&n);
    i=1;
    toplam=0;
    while(i<=n)
    {
        toplam += (float)1.0/i;
        if(i==n)
        {
            printf("%f",toplam);
            break;
        }
        i++;
        printf("%f + ",toplam);

    }
    sonuc=toplam;
    printf("\nSeri degeri toplami = %f",sonuc);
    return 0;
}
