#include <stdio.h>
#include <stdlib.h>



int toplama(int sayi)
{

    int toplam = 0;
    if(sayi == 0)
    {
        return 0;
    }
    else
    {

        toplam += sayi + toplama(sayi - 1);
    }
    return toplam;

}

int main()
{

    int n;
    printf("Lutfen bir n tam sayisi giriniz : ");
    scanf("%d",&n);

    int sonuc = toplama(n);

    printf("Toplamin sonucu = %d ",sonuc);


    return 0;
}
