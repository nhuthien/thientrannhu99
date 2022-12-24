#include <stdio.h>
#include <stdbool.h>
#include <math.h>
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
    printf("The array inputed have %d element(s): \n");
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n",i,arr[i]);
    }
}
bool IsAprimeNumber(int arr[], int i)
{
    int dem = 0; //đếm ước số
    for(int j=2; j <= sqrt(arr[i]); j++) //arr[i], not i !!
        {
            if((arr[i]%j)==0) // truy xuất một phần tử trong mảng
            {
            dem++;
            }
        }
    if(dem==0) return true;
    return false;
    }
void displayPrime(int arr[], int n)
{
    for(int i=0; i < n; i++)
    {
        if(IsAprimeNumber(arr,i) == true) printf("a[%d] = %d    ",i,arr[i]);
    }
}
int main()
{
    int arr[30];
    int n, sum;
    printf("Total number of array elements: n = "); scanf("%d",&n);
    enterArray(arr, n);
    displayArray(arr, n);
    printf("The prime in entered array: ");
    displayPrime(arr,n);
}