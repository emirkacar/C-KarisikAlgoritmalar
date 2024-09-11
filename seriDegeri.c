#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sayi,i;
    float x = 1;
    float seri=0;

    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);
    printf("Reel sayi x'i giriniz: ");
    scanf("%f",&x);

    if(sayi>0)
    {
        for(i=1;i<=2*sayi-1;i+=2)
        {
            seri+=i/pow(x,i+1);
        }
        printf("Seri : %.2f",seri);
    }
    else
    {
        printf("Islem yapilamaz.");
    }

    return 0;
}
