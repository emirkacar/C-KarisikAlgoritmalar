#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi ;
    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d",&sayi);

    for (  ; sayi!= -1 ;)
    {
        int sayininKaresi = sayi * sayi;
        printf("%d sayisinin karesi : %d\n",sayi,sayininKaresi);
        printf("Lutfen bir sayi giriniz.\n");
        scanf("%d",&sayi);



    }

    return 0;
}
