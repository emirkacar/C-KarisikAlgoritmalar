#include <stdio.h>
#include <stdlib.h>

int i = 0;
int dizi[100];
void tekSayilar(int sayi)
{
    if(sayi <= 0)
    {
        return;
    }
    if(sayi % 2 != 0)
    {
        dizi[i] = sayi;
        i++;
    }
    tekSayilar(sayi-1);


}
void yazdir()
{
    int j;
    for(j=0;j<i;j++)
    {
        printf("%d ",dizi[j]);
    }
    printf("\n");
}





int main()
{
    int n;
    printf("Lutfen n tam sayisini giriniz: ");
    scanf("%d",&n);

    tekSayilar(n);
    yazdir();


    return 0;
}
