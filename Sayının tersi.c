#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int sayi,tersSayi;
    printf("3 basamakli sayi giriniz:");
    scanf("%d",&sayi);

    int birler=sayi%10;
    int onlar =(sayi/10)%10;
    int yuzler=(sayi/10)/10;
    tersSayi=birler*100+onlar*10+yuzler*1;

    printf("Sayinin tersi:%d",tersSayi);*/

    int sayi;
    int tersi=0;
    printf("Sayi:");
    scanf("%d",&sayi);


    while(sayi!=0)
    {
        tersi=tersi*10+sayi%10;
        sayi/=10; //Sayı her seferinde 10'a bölünüyor çünkü bir sayıyı her seferinde 10'a bölersek sonunda sayı sıfır olur
    }
    printf("Sayinin tersi:%d",tersi);



    return 0;
}
