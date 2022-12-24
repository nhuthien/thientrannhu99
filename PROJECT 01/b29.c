#include <stdio.h>
void In(int n) //Hàm không trả về giá trị
{
for(int i = 0; i < n; i++)
{
    printf("\nHam khong tra ve gia tri (%d)",i+1);
}
}
int main()
{
    In(7);
}