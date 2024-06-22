#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kacTane = 0;
    for ( int i = 9 ; i <= 100 ; i++)
    {

        if(i%7==0 && i%3==0)
        {
            printf("%d sayisi 7 'nin ve 3'un katidir.\n",i);
            kacTane+=1;
        }


    }
    printf("\n");
    printf("%d tane 7'e ve 3'e tam bolunebilen sayi vardir.\n",kacTane);
    return 0;
}
