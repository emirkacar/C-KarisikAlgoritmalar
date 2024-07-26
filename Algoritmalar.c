#include <stdio.h>
#include <stdlib.h>

int mukemmelMi(int sayi)
{
    int i,toplam;
    toplam=0;

    for(i=1;i<sayi;i++)
    {
        if(sayi%i==0)
        {
            toplam+=i;
        }
    }
    if(toplam==sayi)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int asalMi(int sayi)
{
    int i,j,asalDurumu;

    for(i=2;i<sayi;i++)
    {
        asalDurumu=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                asalDurumu= 0;
                return 0;
            }
        }
        if(asalDurumu)
        {
            return 1;
        }
    }
}
int faktoriyelAlma(int sayi)
{
    int sonuc =1;
    while(sayi>0)
    {
        sonuc*=sayi;
        sayi--;
    }
    return sonuc;
}
int usAlma(int taban,int us)
{
    if(us==0)
    {
        return 1;
    }
    return taban*usAlma(taban,us-1);


}
int bolme(int sayi1,int sayi2)
{
    if(sayi1>sayi2)
    {
        return sayi1/sayi2;
    }
    else
    {
        return sayi2/sayi1;
    }
}

int carpma(int sayi1,int sayi2)
{
    return sayi1*sayi2;
}


int cikartma(int sayi1,int sayi2)
{
    if(sayi1>sayi2)
    {
        return sayi1-sayi2;
    }
    else
    {
        return sayi2-sayi1;
    }
}

int toplama(int sayi1,int sayi2)
{
    return sayi1+sayi2;

}

int main()
{
    int main,secim;

    main=1;
    while(1)
    {
        if(main)
        {
            printf("\nProjeme hosgeldiniz\n"
                   "1-Toplama\n"
                   "2-Cikartma\n"
                   "3-Carpma\n"
                   "4-Bolme\n"
                   "5-Us Alma\n"
                   "6-Faktoriyel Hesaplama\n"
                   "7-Asal Sayi Kontrolu\n"
                   "8-Mukemmel Sayi Kontrolu\n"
                   "9-Menuye Tekrar Gel\n"
                   "10-Cikis\n");
            main=0;
            printf("Seciminizi giriniz: ");
            scanf("%d",&secim);
            if(secim==1)
            {
                int sayi1,sayi2,sonuc;
                printf("Sayi1'i giriniz: ");
                scanf("%d",&sayi1);
                printf("Sayi2'yi giriniz: ");
                scanf("%d",&sayi2);
                sonuc=toplama(sayi1,sayi2);
                printf("Toplamanin sonucu:%d\n",sonuc);
                main=1;

            }
            else if(secim==2)
            {
                int sayi1,sayi2,sonuc;
                printf("Sayi1'i giriniz: ");
                scanf("%d",&sayi1);
                printf("Sayi2'yi giriniz: ");
                scanf("%d",&sayi2);
                sonuc=cikartma(sayi1,sayi2);
                printf("Cikartmanin sonucu:%d\n",sonuc);
                main=1;
            }
            else if(secim==3)
            {
                int sayi1,sayi2,sonuc;
                printf("Sayi1'i giriniz: ");
                scanf("%d",&sayi1);
                printf("Sayi2'yi giriniz: ");
                scanf("%d",&sayi2);
                sonuc=carpma(sayi1,sayi2);
                printf("Carpmanin sonucu:%d\n",sonuc);
                main=1;
            }
            else if(secim==4)
            {
                int sayi1,sayi2,sonuc;
                printf("Sayi1'i giriniz: ");
                scanf("%d",&sayi1);
                printf("Sayi2'yi giriniz: ");
                scanf("%d",&sayi2);
                sonuc=bolme(sayi1,sayi2);
                printf("Bolmenin sonucu:%d\n",sonuc);
                main=1;
            }
            else if(secim==5)
            {
                int taban,us,sonuc;
                printf("Taban degerini giriniz: ");
                scanf("%d",&taban);
                printf("Us degeri giriniz: ");
                scanf("%d",&us);
                sonuc = usAlma(taban,us);
                printf("Us almanin sonucu:%d\n",sonuc);
                main=1;
            }
            else if(secim==6)
            {
                int sayi,sonuc;
                printf("Sayi: ");
                scanf("%d",&sayi);
                sonuc=faktoriyelAlma(sayi);
                printf("Faktoriyelin sonucu:%d\n",sonuc);
                main=1;
            }
            else if(secim==7)
            {
                int sayi,sonuc;
                printf("Asal sayi kontrolu yapilacak sayiyi giriniz: ");
                scanf("%d",&sayi);
                sonuc = asalMi(sayi);
                printf("Asal mi ? %d\n",sonuc);
                main=1;
            }
            else if(secim==8)
            {
                int sayi,sonuc;
                printf("Mukemmel sayi kontrolu yapacak sayiyi giriniz: ");
                scanf("%d",&sayi);
                sonuc=mukemmelMi(sayi);
                printf("Mukemmel sayi mi ? %d\n",sonuc);
                main=1;

            }
            else if(secim==9)
            {
                main=1;
            }
            else if(secim==10)
            {
                main=0;
                break;
            }
            else
            {
                printf("1-11 arasi bir deger giriniz.");
                main=1;
            }

        }
    }

    return 0;
}
