#include <stdio.h>
void enterArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ",i); scanf("%d",&arr[i]);
    }
}
void displayArray(int arr[], int n)
{
    printf("The array inputed have %d element(s): \n");
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n",i,arr[i]);
    }
}
void swap(int *a, int *b) // swap 2 integer numbers accord to Geekforgeek
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j] < arr[j+1]) swap(&(arr[j]),&(arr[j+1]));
        }
    }
    printf("\nMax to min: \n");
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n",i,arr[i]);
    }
}
int main()
{
    int arr[30];
    int n;
    printf("Total element number of array: n = ");  scanf("%d",&n);
    enterArray(arr,n);
    displayArray(arr,n);
    sort(arr,n);
}