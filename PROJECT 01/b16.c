#include <stdio.h>
int i, sum=0;
int a, b;
int main()
{
    printf("Nhap vao so a: "); scanf("%d",&a);
    printf("Nhap vao so b: "); scanf("%d",&b);
    if(a%2 != 0) a++; //kiem tra a la chan? => rut gon so vong lap for
    for(i=a;i<=b;i+=2)
    {
        sum+=i;
    }
    printf("Tong cac so chan tu a den b la %d",sum);
    return 0;
}