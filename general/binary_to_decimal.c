#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0, n, sum = 0;
    printf("Enter a binary: "); scanf("%d",&n);
    while(n != 0)
    {
    if(n%10 == 1) sum = sum + pow(2,i);
    n = n/10;    
    printf("%d\n",n);
    i++;
    }
    printf("sum = %d",sum);
}