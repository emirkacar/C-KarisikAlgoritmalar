#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,s2;
    char sonuc;

    printf("s1 sayisini giriniz: ");
    scanf("%d",&s1);
    printf("s2 sayisini giriniz: ");
    scanf("%d",&s2);

    if(s1==0 || s2==0)
    {
        sonuc='0';
    }
    else
    {
        if(s1<0 && s2 <0)
        {
            sonuc='>';
        }
        else if((s1<0 && s2>0) || (s1>0 && s2<0))
        {
            sonuc='<';
        }
        else
        {
            sonuc='>';
        }
    }
    printf("Sonucun isareti:%c",sonuc);



    return 0;
}
