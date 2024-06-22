#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Dizi kac elemanli olsun?\n");
    scanf("%d",&n);
    int dizi[n];

    for(int i=0;i<n;i++)
    {
        printf("Lutfen dizinin elemanlarini giriniz.\n");
        scanf("%d",&dizi[i]);
    }
    int sayac =0;
    while(sayac<n)
    {
        printf("Dizinin %d . elemani : %d\n",sayac,dizi[sayac]);
        sayac++;
    }
    return 0;
}
