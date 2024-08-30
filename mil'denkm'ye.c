#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float mil,km,define;

    define = 1.609;

    printf("Mil degerini giriniz: ");
    scanf("%f",&mil);

    km=mil*define;

    printf("Mil to km:%.2f",km);



    return 0;
}
