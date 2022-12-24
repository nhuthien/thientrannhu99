Question 6
#include <stdio.h>
int func(int a, int b)
{
    return a+b;
}
int (*fptr)(int, int) = &func;
int main()
{
    fptr = &func;
    int a = 5, b = 7;
    int i;
    i = fptr(a,b);
    printf("- %d -",i);
}