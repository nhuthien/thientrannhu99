#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int check;
int square;
bool has_five_divisor(int n)
{
    int count = 0;
    int check = sqrt(n);
    int square = pow(check,2);
    for(int i=1; i<check; i++)
    {
        if(n%i == 0) count++;
        if(count > 2) return false; //Good :D
    }
    if(count == 2 && square == n) return true; //IF n has 2 divisors and one of divisors is not a ... of n => n has 5 divisors;
    return false; //others
}
int main()
{
    int n;
    printf("Enter n: n = ");
    scanf("%d",&n);
    printf("List of number having 5 divisor are: ");
    //int check = sqrt(n);
    //int binhphuong = pow(check,2);
    //printf("%d",binhphuong);
    for(int i=1; i<n+1; i++)
    {
        if(has_five_divisor(i) == true) //i, not n
        {
            printf("%d ",i);
        }
    }
}