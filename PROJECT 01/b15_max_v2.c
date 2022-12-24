#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("a = "); scanf("%d",&a);
    printf("b = "); scanf("%d",&b);
    printf("c = "); scanf("%d",&c);
    if(a>=b)
    {
        a>=c? (max = a) : (max = c);
    }
    else
    {
        b>=c ? (max = b) : (max = c);
        }
    printf("GTLN la MAX = %d",max);
}