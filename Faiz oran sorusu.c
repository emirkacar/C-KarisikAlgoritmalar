#include <stdio.h>
#include <stdlib.h>

int main()
{
    double para;
    double faiz = 0.05;
    int i =0;
    int yil =1;
    printf("Lutfen paranizi giriniz.\n");
    scanf("%lf",&para);

    while(i<10)
    {
        printf("%d .yilda %2lf TL paraniz var.\n",yil,para);
        para+=para*faiz;
        yil++;
        i++;

    }
    return 0;
}
