#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,asalDurumu,i,j;

    printf("Sayi 1'i giriniz: ");
    scanf("%d",&sayi1);
    printf("Sayi 2'yi giriniz: ");
    scanf("%d",&sayi2);

    for(i=2;i<sayi2;i++)
    {
        asalDurumu=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                asalDurumu=0;
                break;
            }
        }
        if(asalDurumu)
        {
            printf("%d ",j);
        }
    }

    return 0;
}
