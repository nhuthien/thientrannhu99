#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    char nhap;
    printf("Nhap phep toan: cong, tru, nhan, chia: "); scanf("%c",&nhap);
    printf("a = "); scanf("%d",&a);
    printf("b = "); scanf("%d",&b);
    switch(nhap)
    {
    case '+':
        printf("%d + %d = %d",a,b,a+b);
        break;
    case '-':
        printf("%d - %d = %d",a,b,a-b);
        break;
    case '*':
        printf("%d * %d = %.2f",a,b,a*b);
        break;
    case '/':
        printf("%d / %d = %.2f",a,b,a/b);
        break;
    default:
        printf("Khong co phep toan");
        break;            
    }
}