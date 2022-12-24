#include <stdio.h>
int litePower(int x, int n)
{
    int result = 1;
    while(n)
    {
    if(n%2 == 1) //kiểm tra mũ chẵn/lẻ
    {
        result = result*x;
    }
    //bắt đầu tính theo mũ chẵn
    x = x*x;
    n = n/2; //(x^2)^(n/2), n is a integer number!
    }
    return result; 
}
int main()
{
int x, n;
printf("nhap x = "); scanf("%d",&x);
printf("nhap n = "); scanf("%d",&n);
printf("%d",litePower(x,n));
}