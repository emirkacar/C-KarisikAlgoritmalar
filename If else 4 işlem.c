#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a , b ;

    int sonuc;

    char operator;

    printf("Lutfen a ve b sayilarini giriniz.\n");
    scanf("%d\n%d",&a,&b);

    printf("Lutfen bir operator giriniz. (+,-,*,/)  \n");
    scanf(" %c",operator);


    if (operator == '+')
    {
        sonuc = a + b ;
        printf("%d + %d = %d",a,b,sonuc);
    }
    else if (operator == '-')
    {
        sonuc = a - b ;
        printf("%d - %d = %d",a,b,sonuc);
    }
    else if (operator == '*')
    {
        sonuc = a * b ;
        printf("%d * %d = %d",a,b,sonuc);
    }
    else if ( operator == '/')
    {
        sonuc = a / b ;
        printf("%d / %d = %d",a,b,sonuc);
    }
    else
    {
        printf("Gecersiz sonuc. \n");
    }




    return 0;
}
