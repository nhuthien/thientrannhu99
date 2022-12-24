#include <stdio.h>
#include <math.h>
int min2num(int a, int b) //Tìm min của 2 số
{
    return a>b ? b:a;
}
int min3num(int a, int b, int c) //Tìm min của 3 số
{
    return min2num(min2num(a,b),c); //Truyền tham số vào hàm min
}
int main()
{   
    int a, b, c;
    printf("a = "); scanf("%d",&a);
    printf("b = "); scanf("%d",&b);
    printf("c = "); scanf("%d",&c);
    printf("Gia tri nho nhat trong 3 so: %d, %d va %d la %d",a,b,c,min3num(a,b,c));
}