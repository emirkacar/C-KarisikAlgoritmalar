#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,enK,enB,i;

    printf("x degeri giriniz: ");
    scanf("%d",&x);
    printf("y degeri giriniz: ");
    scanf("%d",&y);
    printf("z degeri giriniz: ");
    scanf("%d",&z);

    enK=x;
    enB=x;
    int dizi[]= {x,y,z};

    for(i=0; i<3; i++)
    {
        if(enK>dizi[i])
        {
            enK=dizi[i];
        }
        if(enB<dizi[i])
        {
            enB=dizi[i];
        }
    }
    printf("En buyuk sayi = %d\n",enB);
    printf("En kucuk sayi = %d",enK);



    return 0;
}
