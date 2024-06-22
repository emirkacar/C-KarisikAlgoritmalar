#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,enBuyukSayi;
    int i = 0;
    printf("Lutfen uc adet sayiyi giriniz.\n");
    scanf("%d%d%d",&x,&y,&z);


    while(i<3)
    {
        if(x>y&&x>z)
        {
            enBuyukSayi=x;

        }
        else if ( y>x&&y>z)
        {
            enBuyukSayi=y;

        }
        else
        {
            enBuyukSayi=z;

        }
        i++;


    }
    printf("%d sayisi en buyuktur.\n",enBuyukSayi);
    return 0;
}
