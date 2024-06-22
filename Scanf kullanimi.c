#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* int sayi;
    printf("Lutfen bir sayi giriniz.");
    printf("\n");
    scanf("%d",&sayi); */

    /* & adres demektir ve scanf fonksiyonunun icinde kullanilir. */



    /* printf("Aldigim sayi:%d" ,sayi);
    printf("\n");

    float sayi2;
    printf("Lutfen bir sayi giriniz.");
    scanf("%f",&sayi2);
    printf("Sayi2 = %f",sayi2);
    printf("\n");



    double sayi3;
    printf("Lutfen bir yeni sayi giriniz.");
    scanf("%lf",&sayi3);
    printf("Sayi3 : %lf",sayi3);
    printf("\n");

    char benimkarakterim ;
    printf("Lutfen bir karakter giriniz.");
    scanf("%c",&benimkarakterim);
    printf("Aldigim karakter= %c",benimkarakterim);
    printf("\n"); */

    /* ÖRNEK */

    int num1,num2;
    char basharfim;
    printf("Lutfen bir sayi giriniz.");
    scanf("%d",&num1);
    printf("Ilk sayim : %d",num1);
    printf("\n");

    printf("Lutfen ikinci sayiyi giriniz.");
    scanf("%d",&num2);
    printf("Ikinci sayim : %d",num2);
    printf("\n");

    getchar();   /* getchar() çaðrýsý bir önceki scanf çaðrýsýndan kalan newline karakterini tüketir, böylece sonraki scanf çaðrýsýnýn beklenen giriþi almasýný saðlar. */

    printf("Lutfen bas harfinizi giriniz.");
    scanf("%c",&basharfim);
    printf("Basharfim : %c",basharfim);
    printf("\n");

    printf("Ilk sayi : %d Ikinci sayi : %d Basharfim : %c",num1,num2,basharfim);








    return 0;
}
