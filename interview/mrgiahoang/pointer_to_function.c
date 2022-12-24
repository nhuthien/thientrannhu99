#include <stdio.h>
int func(int a, int b)
{
    return a+b;
}
int (*fptr)(int, int) = &func;
int main()
{
    int a = 5, b = 7;
    printf("sum = %d",fptr(a,b));
}