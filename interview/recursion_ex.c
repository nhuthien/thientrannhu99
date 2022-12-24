#include <stdio.h>
#include <math.h>
int main()
{
    int n = 100;
    float sum = 0;
    for (int i=n; i>0; i--)
    {
        if(i == n)
        {
            sum = sqrt(i) + i - 1;
        }
        else if(i < n)
        {
            sum = sqrt(sum) + i - 1;
        }
    }
    printf("%.3f",sum);
}