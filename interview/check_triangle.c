#include <stdio.h>
#include <stdbool.h>
bool Is_a_triangle(int a, int b, int c)
{
    if(a+b>c && a+c>b && b+c>a) return true;
    return false;
}
int main()
{
    int a, b, c;
    printf("Enter a, b, c:\n");
    printf("a = "); scanf("%d",&a);
    printf("b = "); scanf("%d",&b);
    printf("c = "); scanf("%d",&c);
    if(Is_a_triangle(a,b,c) == true)   printf("a, b, c are sides of a triangle !");
    else printf("a, b, c aren't sides of a triangle !");
    return 0;
}