#include <stdio.h>
#include <stdlib.h>

int fibonacci(int sayi)
{
    if(sayi == 0)
    {
        return 0;
    }
    else if(sayi == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(sayi - 1) + fibonacci(sayi - 2);
    }



}






int main()
{


    int n,i;
    printf("Kac adet fibonnaci sayisi ureteceksiniz ? ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d ",fibonacci(i));
    }


    return 0;
}
