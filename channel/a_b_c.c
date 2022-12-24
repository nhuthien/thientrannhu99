#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b, c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b) swap(&a,&b);
    if(b>c) swap(&b,&c);
    if(a>c) swap(&a,&c);
    printf("%d",b); //a, b, c is sorted from small to large, b is between a and b;
}
//2 1 2