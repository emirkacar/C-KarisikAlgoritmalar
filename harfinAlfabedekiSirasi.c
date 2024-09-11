#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    int sira;

    printf("Bir harf giriniz: ");
    scanf("%c",&harf);

    if(harf>='A' && harf<='Z')
    {
        sira=(int)harf-(int)'A'+1;
        printf("%c %d. harftir.",harf,sira);
    }
    else if(harf>='a' && harf<='z')
    {
        sira=(int)harf-(int)'a'+1;
        printf("%c %d. harftir.",harf,sira);
    }
    else
    {
        printf("Boyle bir harf yoktur.");
    }


    return 0;
}
