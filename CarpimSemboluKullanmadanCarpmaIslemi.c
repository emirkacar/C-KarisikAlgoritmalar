#include <stdio.h>
#include <stdlib.h>


int carpim(int a,int b)
{


    int toplam = 0;

    if ( a,b == 0)
    {
        return 0;
    }
    else
    {
        toplam += a+carpim(a,b-1);
    }
    return toplam;



}

int main()
{
    int a,b;
    printf("Lutfen 2 adet sayi giriniz: ");
    scanf("%d%d",&a,&b);

    printf("%d carpi %d = %d",a,b,carpim(a,b));
    return 0;
}
