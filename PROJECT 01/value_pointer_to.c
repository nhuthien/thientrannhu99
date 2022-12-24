#include <stdio.h>
int a;
int *address = &a;
*address = 7;
int main()
{
printf("%u",a);
}