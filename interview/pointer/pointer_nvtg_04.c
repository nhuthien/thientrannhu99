#include <stdio.h>
int sum;
int *sum2number(int x, int y)
{
    sum = x+y;
    return &sum;
}
int main()
{
    int x, y;
    printf("x = "); scanf("%d",&x);
    printf("y = "); scanf("%d",&y);
    printf("sum = %d",*sum2number(x,y));
}