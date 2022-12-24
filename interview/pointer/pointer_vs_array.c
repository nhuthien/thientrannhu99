#include <stdio.h>

int main()
{
    int arr[]={5,4,3,2,1,78,96,43};
    int *p = arr;
    printf("%d",(p+1));
    printf("\n%d",&arr[1]);
}