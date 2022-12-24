#include <stdio.h>

int main()
{
    int a;
    printf("Nhap vao ma ASCII cua ky tu a: "); scanf("%d",&a);
    printf("Ky tu tuong ung la %c",(char)a);
    printf("\nKy tu nhap vao la ky tu T?");
    if(a == 84)
    {
        printf(" DUNG");
    }
    else printf(" SAI");
}