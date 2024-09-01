#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=0;
    int sayac=0;


    printf("n degerini giriniz: ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%17==0)
        {
            printf("%5d ",i);
            sayac++;
            if(sayac%10==0)
            {
                printf("\n");
            }
        }
        i++;
    }

    return 0;
}
