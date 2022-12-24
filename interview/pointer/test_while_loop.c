#include <stdio.h>
int len = 7, a = 4, b = 10;
int i = 0;
int main()
{
    while(i < len)
    {
        if(a != b)
        {
            a++;
            printf("a = %d\n",a);
            i++;
        }
        else if(a == b)
        {
            printf("a+b = %d\n",a+b);
            i++;
        }
    }
}