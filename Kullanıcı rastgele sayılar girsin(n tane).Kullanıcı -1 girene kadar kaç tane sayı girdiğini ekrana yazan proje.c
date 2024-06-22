#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int sayi;
    int n =0;

    while(sayi!=-1)
    {
        printf("Lutfen tam sayi giriniz.\n");
        scanf("%d",&sayi);
        n++;
        if(sayi==-1)
        {
            sayi=-1;
        }

        i++;

    }
    printf("%d kadar sayi girildi.\n",n);
    return 0;
}
