#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool Is_a_prime(int n)
{
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0) return false; //if i is a divisor of n, n is not a prime number !! 
    }
    return true;// n is a prime number
}
int main()
{
    int m, n;
    printf("Enter m, n: ");
    scanf("%d %d",&m,&n);
    for(int i=m; i<n+1; i++)
    {
        if(Is_a_prime(i) == true) printf("Prime number: %d\n",i);
    }
}