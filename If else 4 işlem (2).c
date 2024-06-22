#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, sonuc;
    char op;

    printf("Lutfen a ve b sayilarini giriniz.\n");
    scanf("%d %d", &a, &b); // Dešižiklik burada

    printf("Lutfen bir operator giriniz. (1:'+' 2:'-' 3:'*' 4:'/')\n");
    scanf(" %c", &op);

    if (op == '+') // Dešižiklik burada
    {
        sonuc = a + b;
        printf("%d + %d = %d\n", a, b, sonuc); // Dešižiklik burada
    }
    else if (op == '-') // Dešižiklik burada
    {
        sonuc = a - b;
        printf("%d - %d = %d\n", a, b, sonuc); // Dešižiklik burada
    }
    else if (op == '*') // Dešižiklik burada
    {
        sonuc = a * b;
        printf("%d * %d = %d\n", a, b, sonuc); // Dešižiklik burada
    }
    else if (op == '/') // Dešižiklik burada
    {
        if (b != 0)
        {
            sonuc = a / b;
            printf("%d / %d = %d\n", a, b, sonuc); // Dešižiklik burada
        }
        else
        {
            printf("Bolme islemi icin b sifir olamaz.\n");
        }
    }
    else
    {
        printf("Gecersiz operator girdiniz.\n");
    }

    return 0;
}
