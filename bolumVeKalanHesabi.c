#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bolunen,bolen,bolum,kalan;

    printf("Bolunen ve boleni giriniz: ");
    scanf("%d%d",&bolunen,&bolen);

    bolum = bolunen/bolen;
    kalan=bolunen%bolen;

    printf("Bolum:%d\n",bolum);
    printf("Kalan:%d",kalan);


    return 0;
}
