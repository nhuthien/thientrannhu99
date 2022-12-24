#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhap vao so nguyen a: ");
    scanf("%d",&a);
    printf("Nhap vao so nguyen b: ");
    scanf("%d",&b);
    float div = (float)a/b;
    printf("Ket qua phep chia la: %.9f",div);
}