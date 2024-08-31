#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,s2,max,min;

    printf("Iki tam sayiyi giriniz: ");
    scanf("%d",&s1);
    scanf("%d",&s2);

    max=s1;
    min=s1;
    if(max<s2)
    {
        max=s2;
    }
    if(min>s2)
    {
        min=s2;
    }
    if(max==s1)
    {
        printf("%d sayisi %d sayisindan buyuktur.\n",s1,s2);
    }
    if(max==s2)
    {
        printf("%d sayisi %d sayisindan buyuktur.\n",s2,s1);
    }
    if(s1 != s2)
    {
        if(max==s1)
        {
            printf("Maximum sayi %d'dir.",s1);
        }
        if(max==s2)
        {
            printf("Maximum sayi %d'dir.",s2);
        }
    }
    else
    {
        printf("Iki sayi birbirine esittir.");
    }

    return 0;
}
