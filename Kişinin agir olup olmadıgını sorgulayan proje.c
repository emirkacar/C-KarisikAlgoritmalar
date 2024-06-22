#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool agirMi;
    int kilo;
    printf("Lutfen kilonuzu giriniz.\n");
    scanf("%d",&kilo);


    if ( kilo >= 90)
    {
        printf("Kisi agir.\n");
        agirMi=true;
        printf("%d",agirMi);
    }
    else
    {
        printf("Kisi agir degil.\n");
        agirMi=false;
        printf("%d",agirMi);,
    }







    return 0;
}
