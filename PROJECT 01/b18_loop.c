#include <stdio.h>
#include <math.h>
int main()
{
    int n, last;
    printf("ENTER n, n = "); scanf("%d",&n);
    last = n;
/*  while(last>9)
    {
        last /= 10;
    }
    printf("\nSo dau tien cua %d la: %d",n,last);
*/
    for(;last>9;last /= 10)
    {
    }
    printf("Chu so dau tien cua so %d la: %d",n,last);
}