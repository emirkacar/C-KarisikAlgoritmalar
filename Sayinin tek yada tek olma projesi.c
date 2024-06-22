#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    char karakter;

    printf("Lutfen bir tamsayi giriniz.\n");


    if (scanf("%d%c",&sayi,&karakter) != 2 || karakter != '\n')
    {
        printf("Lutfen reel tam sayi giriniz.\n");
        return 1;
    }
    if ( sayi % 2 == 0)
    {
        printf("Sayi cift sayidir.\n");
    }
    else if ( sayi % 2 == 1)
    {
        printf("Sayi tek sayidir.\n");
    }
    return 0;
}
