#include <stdio.h>
void swap(int *a, int *b) // hoán vị 2 số nguyên
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a[2];
    a[1] = 3, a[2] = 4;
    printf("Before swaping: a = %d, b = %d",a[1],a[2]);
    swap(&a[1],&a[2]);
    printf("\nAfter swaping: a = %d, b = %d",a[1],a[2]);
}
