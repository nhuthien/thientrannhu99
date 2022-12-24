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
    printf("The array inputed have %d element(s): ");
    for(int i = 0; i < n; i++)
    {
        printf("\na[%d] = %d",i,arr[i]);
    }
}
int sumOfArray(int arr[],int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if((arr[i]%2)!=0)
        {
            sum+=arr[i];
        }
    }
    return sum;
}
int main()
{
    int arr[30];
    int n, sum;
    printf("Total number of array elements: n = "); scanf("%d",&n);
    enterArray(arr, n);
    displayArray(arr, n);
    printf("\nSum of odd element(s) in inputed Array is: %d",sumOfArray(arr,n));
}