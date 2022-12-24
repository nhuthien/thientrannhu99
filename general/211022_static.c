#include <stdio.h>
int i;
int test_static(int a)
{
    static int i = 2;
}
int main()
{
    while(1)
    {
        printf("i = %d",i);
        delay(1);
        i++;
    }
}