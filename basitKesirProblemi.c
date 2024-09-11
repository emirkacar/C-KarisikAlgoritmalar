#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float sonuc=0;
    char karakter;

    printf("Isleminizi seciniz:(+,-) ");
    scanf("%c",&karakter);
    printf("a degerini giriniz: ");
    scanf("%d",&a);
    printf("b degerini giriniz: ");
    scanf("%d",&b);

    if( (a==0) || (b==0) )
    {
        printf("Islem yapilamaz.\n");
    }
    else
    {
        if(karakter=='+')
        {
            printf("1/%d %c 1/%d = %d/%d",a,karakter,b,a+b,a*b);
        }
        else if(karakter=='-')
        {
            printf("1/%d %c 1/%d = %d/%d",a,karakter,b,b-a,a*b);
        }
        else
        {
            printf("Islem yapilamaz.+ veya - islemi yapilir.\n");
        }
    }


    return 0;
}
