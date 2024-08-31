#include <stdio.h>
#include <stdlib.h>

int main()
{
    int deger;

    printf("Degeri giriniz: ");
    scanf("%d",&deger);

    if(deger%2==0)
    {
        printf("Sayi cift sayidir.\n");
    }
    else
    {
        printf("Sayi tek sayidir.\n");

    }
    return 0;
}
