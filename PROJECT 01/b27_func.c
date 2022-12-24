#include <stdio.h>
#include <math.h>
int x, y;
int add(int a, int b)
    {
        int sum = a + b;
        return sum;
    }
int main()
{
    printf("X = "); scanf("%d",&x);
    printf("Y = "); scanf("%d",&y);
    printf("Tong X + Y = %d",add(x,y));
}