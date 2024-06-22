#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*int sayi;
    printf("Lutfen bir sayi giriniz. \n");
    scanf("%d",&sayi);

    if ( sayi % 3 == 0)
    {
        printf("Sayi 3'un katidir.\n");
    }
    if ( sayi % 7 == 0)
    {
        printf("Sayi 7'nin katidir.\n");
    }
    if (sayi % 21 == 0)
    {
        printf("Sayi 21'in katidir.\n");
    }
    else
    {
        printf("Sayi ne 3'un ne 7'nin ne de 21'in bir katidir.\n");
    } */

    int sayi ;

    printf("Lutfen sayiyi giriniz.\n");
    scanf("%d",&sayi);

    if ( sayi % 3 == 0 || sayi % 7 == 0)
    {
        printf("%d sayisi 3'e veya 7'ye bolunur.\n",sayi);
    }
    else
    {
        printf("%d sayisi 3'un veya 7'nin bir kati degildir.\n",sayi);
    }
    return 0;
}
