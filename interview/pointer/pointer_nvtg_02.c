#include <stdio.h>
void arrayInput(int *arr, int *number)
{
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",number); //
    for(int i=0; i<*number; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",arr+i);
    }
}
void arrayOutput(int *arr,int number) //arr <=> pt
{
    for(int i=0; i<number; i++)
    {
        printf("a[%d] = %d\n",i,*(arr+i));
    }
}
int main()
{
    int arr[10], sophantu;
    arrayInput(arr,&sophantu);
    arrayOutput(arr,sophantu);
    return 0;
}