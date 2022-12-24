#include <stdio.h>
int i=11;
int main()
{
    while(i<=10)
    {
        if(i==8) break;
        i++;
    }
    printf("%u",i);
}