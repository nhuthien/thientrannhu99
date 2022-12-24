#include <stdio.h>
void swap(int *a, int *b) //swap in C !!
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Nhap a = "); scanf("%d",&a);
    printf("Nhap b = "); scanf("%d",&b);
    printf("The original value a, b: a = %d, b = %d",a,b);
    swap(&a,&b);
    printf("\nAfter swaping: a = %d, b = %d",a,b);
}