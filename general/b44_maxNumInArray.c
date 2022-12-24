#include <stdio.h>
//Which is the postion of the maximum number in entered array?
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
int MaxElement(int arr[], int n)
{
    int max = arr[0], index;
    for(int i = 1; i < n; i++)
    {
        if(max > arr[i])
        {
            continue; 
        }
        max = arr[i];
    }
    return max;
}
void thePositionOfMaxElement(int arr[], int n)
{
    int maxValue = MaxElement(arr,n);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == maxValue)
        {
            printf("%d  ",i);
        }
    }
}
int main()
{
    int arr[30];
    int n, sum;
    printf("Total number of array elements: n = "); scanf("%d",&n);
    enterArray(arr, n);
    displayArray(arr, n);
    printf("\nThe maximum element in entered array is(are) in position(s):\n");
    thePositionOfMaxElement(arr,n);
}