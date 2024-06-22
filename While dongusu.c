#include <stdio.h>
#include <stdlib.h>

int main()
{



   for ( int i = 0 ; i < 10 ; i++)
   {
       if ( i == 4)
       {
           continue;
       }
       if ( i == 9)
       {
           break;
       }

       printf("%d\n",i);
   }








    return 0;
}
