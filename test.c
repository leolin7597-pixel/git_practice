#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);
    
    int record=0;
    int pn=1;
    while(a!=0)
    {
        if(pn==1)
            record+=a%10;
        else
            record-=a%10;
        pn*=-1;
        a=a/10;
    }

    printf("%d",abs(record));

}