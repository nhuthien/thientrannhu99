#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number of element: n = "); scanf("%d",&n);
    int *ptr =(int*)calloc(n,sizeof(int));
//    int *ptr =(int*)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("\nError !!!");
        return 0;
    }
/*
    for(int i=0; i<n; i++)
    {
        printf("a[%d] = ",i); scanf("%d",ptr+i);   
    }
    */
    for(int i=0; i<n; i++)
    {
        printf("a[%d] = %d\n",i,*(ptr+i));
    }
    free(ptr); //
}