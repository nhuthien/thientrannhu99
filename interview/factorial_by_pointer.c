//Write a program in C to compute the factorial of a given number using pointer
#include <stdio.h>
int sum = 1;
int factorial(int *pointer)
{
    for(int i=1; i < *pointer + 1; i++)
    {
        sum*=i;
    }
    return sum;
}
int factorial_recursion(int *pointer)
{
    int i = *pointer;
    while(i>0)
    {
        if(i == 1)
        {
            sum = sum;
        }
        else
        {
            sum*=i;
        }
        i--;
    }
}
int main()
{
    int n;
    int *ptr = &n;
    printf("n = "); scanf("%d",ptr);
    printf("n = %d\n",*ptr);
    printf("SUM = %d",factorial_recursion(ptr));
}