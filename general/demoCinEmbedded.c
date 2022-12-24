#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool IsAPrimeNumber(long long int n) //check số lớn tí :D
{
    int count = 0; //bien dem uoc so
    for(int i=2; i<=sqrt(n); i++) //i <= sqrt(n)
    {
        if(n%i==0) count++;
        if(count!=0) break;
    }
    if(count == 0) return true;
    return false;
}
int main()
{
    long long int n;
    printf("n = "); scanf("%d",&n);
    if(IsAPrimeNumber(n) == true)
    {
    printf("Prime!");
    }
    else {printf("No!");}
}