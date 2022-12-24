#include <stdio.h>

int main()
{
    int a, b;
    printf("\nNhap a = "); scanf("%d",&a);
    printf("\nNhap b = "); scanf("%d",&b);
    printf("a = %d, b = %d",a,b);
    swap(a,b);
    printf("\nGia tri sau khi hoan vi a = %d, b = %d",a,b);
}
int swap(a,b)
{
    //Swap
    int temp = a;
    a = b;
    b = temp; //
    return a,b;
}