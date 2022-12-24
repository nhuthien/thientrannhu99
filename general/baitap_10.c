#include <stdio.h>
#include <math.h>
int power(int x, int n)
{
    int result = 1;
    for(int i = 1; i <= n; i++) //cách 1: dùng for | cách 2: dùng while(n--)
    {
        result = result*x;
    }
    return result;
}
int main()
{
int x, n;
printf("nhap x = "); scanf("%d",&x);
printf("nhap n = "); scanf("%d",&n);
printf("\n%d",power(x,n));
}