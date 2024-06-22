#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =0;
    int yas;
    int toplam =0;
    float ortalama=0;
    int n =0;
    while(i<10)
    {
        printf("Lutfen yasinizi giriniz.\n");
        scanf("%d",&yas);


        if(yas<=0)
        {
            break;
        }
        toplam+=yas;
        ortalama=toplam/n;
        n++;
        i++;


    }

    printf("Sinifta %d tane ogrenci var.\n",n);
    printf("Siniftaki ogrencilerin yaslari toplami : %d\n",toplam);
    printf("Siniftaki ogrencilerin yaslarinin ortalamasi:%d\n",ortalama);
    return 0;
}
