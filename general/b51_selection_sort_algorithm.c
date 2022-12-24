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
    printf("Array have %d element(s): \n");
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n",i,arr[i]);
    }
}
void swap(int *a, int *b) // hoán vị 2 số nguyên
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int arr[], int n)
{
    for(int i=0; i< n - 1; i++) //duyệt n-1 lần
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j]) swap(&arr[i],&arr[j]); //swap directly!
        }
    }
}
int main()
{
    int arr[30];
    int n, sum;
    printf("Total number of array elements: n = "); scanf("%d",&n);
    enterArray(arr, n);
    sort(arr,n);
    displayArray(arr,n);
}