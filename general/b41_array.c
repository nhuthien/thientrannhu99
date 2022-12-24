#include <stdio.h>
int arr[30];
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
int main()
{
    int n;
    printf("Total number of array elements: n = "); scanf("%d",&n);   
    enterArray(arr,n); //truyền vào hàm inputArray mảng arr[10]
    displayArray(arr, n); //mảng trong C: luôn luôn dùng tham chiếu!
}