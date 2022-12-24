#include <stdio.h>
typedef enum
{thu2, thu3, thu4, thu5, thu6, thu7, cn} TUAN;
int main()
{
    TUAN ngay = 1; //or thu3 = 0;
    if(ngay == thu3) //or thu3 = 1;
    {
        printf("Hom nay la thu 3");
    }
    else
    {
        printf("Hom nay khong phai thu 3\n");
    }
}