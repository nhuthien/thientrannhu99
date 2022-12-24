/*
pass by value: truyền tham trị (giá trị)
pass by referenced: truyền tham chiếu
*/
#include <stdio.h>
void swap(int &a, int &b) //truyen tham chieu - only in C++, not C !!
{
    int temp;
    temp = a;
    a = b;
    b = temp;     
}
int main()
{
    int st, nd;
    printf("a = "); scanf("%d",&st);
    printf("b = "); scanf("%d",&nd);
    printf("a = %d, b = %d",st,nd);
    swap(st,nd);
    printf("\nHoan vi a <=> b: a = %d, b = %d",st,nd);
}
