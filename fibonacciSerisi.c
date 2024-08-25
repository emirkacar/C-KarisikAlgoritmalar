#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,b=1,c;
    int i;
    printf("%d %d ",a,b);
    c=a+b;
    for(i=0;i<10;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
