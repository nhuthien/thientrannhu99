#include <stdio.h>
#define CONG(x,y) x+y
int x, y;
int main()
{
    printf("nhap x = "); scanf("%d",&x);
    printf("nhap y = "); scanf("%d",&y);
    printf("x + y = %d",CONG(x,y));
}