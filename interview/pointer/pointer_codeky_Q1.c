#include <stdio.h>

int main()
{
    int i = 100;
    int *p = &i;
    *p = 110;
    printf("%d\n",i); // i = 110;
    (*p)++;
    printf("%d\n",i); // i = 111
    return 0;
}