#include <stdio.h>
#include <stdlib.h>

void yildiz(int sayi)
{

    int i;
    if(sayi == 0)
    {
        return;
    }
    else
    {
        for(i=0;i<sayi;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    yildiz(sayi-1);



}



int main()
{
   int n;
   printf("n tam sayisini giriniz: ");
   scanf("%d",&n);

   yildiz(n);




    return 0;
}
