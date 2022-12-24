#include <stdio.h>

float sum(int n)
{
    float sum = 0;
    for(int i=1; i<n+1; i++) sum+=(float) 1/i;
    return sum;
}

int main()
{
    int n, m;
    printf("Enter: n = "); scanf("%d%d",&n, &m);
    printf("Gia tri tong: %.3f",sum(n));
}