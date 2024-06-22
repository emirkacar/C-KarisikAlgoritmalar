#include <stdio.h>
#include <stdlib.h>

int main()
{

    int yas;
    int enKucukKisininYasi =1000;
    int toplamKisiSayisi = 0;
    int n = 0;
    int i=0;

    while(i<4)
    {
        printf("Lutfen yasinizi giriniz.\n");
        scanf("%d",&yas);

        if(enKucukKisininYasi>yas)
        {
            enKucukKisininYasi=yas;
            n++;

        }
        else if (enKucukKisininYasi==yas)
        {
            n++;
        }

        toplamKisiSayisi++;
        i++;


    }

    printf("En kucuk kisinin yasi:%d\n",enKucukKisininYasi);
    printf("%d kisi vardir.\n",toplamKisiSayisi);
    printf("%d tane en kucuk yasta cocuk vardir.\n",n);






    return 0;
}
