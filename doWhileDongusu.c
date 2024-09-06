#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    float karekok;
    do
    {
        printf("Pozitif bir n degerini giriniz: ");
        scanf("%d",&n);
        if(n>0)
        {
            karekok=sqrt(n);
            printf("%d sayisinin karekoku : %.2f\n",n,karekok);
        }
        if(n==0)
        {
            break;
        }
    }while((n>0) || (n<0));

    return 0;
}
