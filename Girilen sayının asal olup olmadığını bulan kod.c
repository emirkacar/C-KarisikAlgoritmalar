    #include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int sayi;

    while(sayi!=1 || sayi!=2)
    {
        printf("Lutfen pozitif tam sayi giriniz.\n");
        scanf("%d",&sayi);

        if(sayi%1==0 && sayi%sayi==0 && sayi%2==1)
        {
            printf("%d sayisi asal sayidir.\n",sayi);
        }
        else
        {
            printf("%d sayisi asal sayi degildir.\n",sayi);
        }
        i++;
    }
    return 0;
}
