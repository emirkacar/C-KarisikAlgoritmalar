#include <stdio.h>
#include <stdlib.h>


int usAlmaIslemi(int us,int taban)
{
    int deger;
    if(us == 0)
    {
        deger = 1;
    }
    else
    {
        deger = taban * usAlmaIslemi(us-1,taban);
    }
    return deger;

}
int main()
{
    int taban,us;
    printf("Taban :");
    scanf("%d",&taban);

    printf("Us : ");
    scanf("%d",&us);

    printf("%d ussu %d = %d",taban,us,usAlmaIslemi(us,taban));



    return 0;
}
