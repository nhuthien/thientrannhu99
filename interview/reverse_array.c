#include <stdio.h>
//#include <math.h>
void import_array(int *arr,int *number)
{
    printf("n = "); scanf("%d",number);
    for (int i = 0; i < *number; i++)
    {
        printf("a[%d] = ",i); scanf("%d",arr+i);
    }
}
void export_array(int *arr,int number)
{
    for (int i = 0; i < number; i++)
    {
        printf("\na[%d] = %d",i,*(arr+i));
    }
}
void reverse(int *arr, int number) //Reverse entered array
{
    int temp;
    for(int i=0; i<number/2; i++) //regardless of EVEN or ODD
    {
        temp = *(arr + (number - i - 1));
        *(arr+(number - i - 1)) = *(arr + i);
        *(arr + i) = temp;
    }
    for (int i = 0; i < number; i++)
    {
        printf("\na[%d] = %d",i,*(arr+i));
    }
}
int main()
{
    int n;
    int arr[10];
    int *ptr = &arr[0];
    import_array(ptr,&n);
    printf("-   -   -");
    export_array(ptr,n);
    printf("\n-   -   -\n");
    reverse(ptr,n);
}