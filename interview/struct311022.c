#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct Hocsinh
{
    char name[100];
    float mark;
};
typedef struct Hocsinh HS;

HS input(HS &x)
{
    HS x;
    printf("Enter mark: "); scanf("%f",&x.mark);
    getchar();
    printf("Enter name: "); gets(x.name);
    return x;
}
/*
void nhap(HS *x)
{
    getchar();
    gets(x->name);
    scanf("%f",&x->mark);
}
*/
void in(HS x)
{
    printf("%s %.2f\n",x.name, x.mark);
}

int main()
{
    HS a[1000];
    int n;
    printf("Nhap n = ");
    scanf("%d",&n);
    for(int i=0; i<n; i++) input( a[i]);
    for(int i=0; i<n; i++) in(a[i]);
}