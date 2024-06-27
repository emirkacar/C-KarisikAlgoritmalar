#include <stdio.h>
#include <stdlib.h>



int faktoriyel(int sayi)
{
    int sonuc = 1;
    if(sayi == 1 || sayi == 0)
    {
        return 1;
    }
    else
    {
        return sayi*faktoriyel(sayi-1);
    }


}

int main()
{


    int sayi;
    printf("Lutfen sayiyi giriniz: ");
    scanf("%d",&sayi);

    printf("Sonuc = %d ",faktoriyel(sayi));
    return 0;
}
