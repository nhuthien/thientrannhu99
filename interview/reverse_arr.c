#include <stdio.h>

int main()
{
    int arr[10];
    int b[10];
    int n;
    printf("n = "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ",i); scanf("%d",&arr[i]);
        b[i] = arr[i];
    }
    for (int i=0; i < n; i++)
    {
        arr[n-1-i] = b[i];
    }
    printf("-   -   -   -\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n",i,arr[i]);
    }
}