#include <stdio.h>
int SumNonRecursion(int n)
    {
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
}
int SumRecursion(int n) //Ha
{
    if(n==0) { return 0;}
    return (n + SumRecursion(n-1));
}
int main() //Sum of numbers from 1 to 10
{
    int n;
    printf("Enter a number, n = ");
    scanf("%d",&n);
    printf("Khong de quy: %d",SumNonRecursion(n));
    printf("\nDe quy:     %d",SumRecursion(n));
}