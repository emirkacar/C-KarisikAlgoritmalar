#include <stdio.h>
#include <stdlib.h>

int main()
{


    int faktoriyel=1;


    for ( int sayi = 3 ; sayi >0; sayi--)
    {
        faktoriyel*=sayi;
    }
    printf("Faktoriyel : %d",faktoriyel);


    return 0;
}
