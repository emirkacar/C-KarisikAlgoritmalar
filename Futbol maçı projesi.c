#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    int takiminAttigiGolSayisi = 0;
    int takiminYedigiGolSayisi = 0;
    int toplamGolSayisi=0;
    int toplamYedigiGolSayisi=0;

    int puan = 0;



    while(1)
    {
        printf("Lutfen bir secim yapiniz.\n");

        printf("secim 1 ise mac sonucunu gir.\n");
        printf("secim 0 ise maci bitir\n");
        scanf("%d",&secim);


        if(secim==1)
        {

            printf("Takim kac gol atmistir?\n");
            scanf("%d",&takiminAttigiGolSayisi);
            printf("Takim kac gol yemistir?\n");
            scanf("%d",&takiminYedigiGolSayisi);


            if(takiminAttigiGolSayisi>takiminYedigiGolSayisi)
            {
                puan+=3;


            }
            if(takiminAttigiGolSayisi==takiminYedigiGolSayisi)
            {
                puan++;
            }
            toplamGolSayisi+=takiminAttigiGolSayisi;
            toplamYedigiGolSayisi+=takiminYedigiGolSayisi;




        }

        else if (secim==0)
        {

            break;


        }
    }
    printf("Takimin attigi gol sayisi:%d\n",toplamGolSayisi);
    printf("Takimin yedigi gol sayisi:%d\n",toplamYedigiGolSayisi);
    printf("Takimin puani:%d",puan);


    return 0;
}
