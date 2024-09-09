#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,a2,a3;

    printf("A1 dereceseni giriniz: ");
    scanf("%d",&a1);
    printf("A2 dereceseni giriniz: ");
    scanf("%d",&a2);
    printf("A3 dereceseni giriniz: ");
    scanf("%d",&a3);

    if(a1+a2+a3==180)
    {
        if(a1==60 && a2==60 && a3==60)
        {
            printf("Ucgen esitkenar ucgendir.");
        }
        else if( ((a1==a2) && (a1!=a3)) || ((a2==a3) && (a2!=a1)))
        {
            printf("Ucgen ikizkenar ucgendir.");
        }
        else
        {
            printf("Ucgen cesitkenar ucgendir.");
        }
    }
    else
    {
        printf("Bu acilar ile ucgen olusturulamaz.");
    }
    return 0;
}
