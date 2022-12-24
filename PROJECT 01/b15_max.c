#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("a = "); scanf("%d",&a);
    printf("b = "); scanf("%d",&b);
    printf("c = "); scanf("%d",&c);
    if(a>=b)
    {
        if(a>=c)
        {
            max = a;
        }
         else
            {
                max = c;
            }
    }
    else if (a<b)
    {
        if(b>=c)
        {
            max = b;
        }
        else
        {
             max = c;
        }
    }
    printf("GTLN la MAX = %d",max);
}