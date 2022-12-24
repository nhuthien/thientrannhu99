#include <stdio.h>
 int main()
 {
    int a=1, b=2;
    printf("%d == %d la %d ",a,b,a == b);
    printf("\n%d", (a<b && a<b == 1)); // 0 AND 
    printf("\n%d",(a==b || a>b)); //1 OR 0
 }