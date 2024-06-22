#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toplam = 0;
    int kacTane = 0;


    for(int i = 0 ; i <= 100 ; i+=3)
    {
        printf("i'nin degeri : %d\n",i);
        toplam+=i;
        kacTane++;

    }
    printf("Sayilarin toplami : %d \n",toplam);
    printf("Dongude sayi sayisi : %d ",kacTane);










    return 0;
}
