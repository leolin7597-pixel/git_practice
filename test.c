#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);
    
    int record = 0;
    int pn = 1;
    while(a)
    {
        if(pn)
            record += a % 10;
        else
            record -= a % 10;
        pn = !pn;
        a /= 10;
    }

    printf("%d",abs(record));
}