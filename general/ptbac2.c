//giải pt bậc 2
#include <stdio.h>
#include <math.h>
int a, b, c, delta;
void nhap(void)
{
    printf("nhap a = "); scanf("%d",&a);
    printf("nhap b = "); scanf("%d",&b);
    printf("nhap c = "); scanf("%d",&c);
}
int main()
{
    nhap();
    delta = b*b - 4*a*c; //16-4x3=4
    printf("delta = %d",delta);
    if(a == 0)
    {
        printf("Khong hop le!");
    }
    else
    {
        if(delta==0)
        {
            printf("\nx = y = %.2f",(-b - sqrt(delta))/(4*a));
        }
        else if(delta>0)
        {
            printf("\nx = %.2f",(-b - sqrt(delta))/(2*a));
            printf("\ny = %.2f",(-b + sqrt(delta))/(2*a));
        }
        else if(delta<0)
        {
            printf("\nVo nghiem!");
        }        
    }    
}