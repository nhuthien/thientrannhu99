#include <stdio.h>
#include <stdlib.h>
int function ()
{
    int a = 5;
    return a; //thoát khỏi hàm hiện tại
    printf("\na = %d",a);
    exit(0);
}
int main()
{
    int output = function();
    printf("\nExit !!");
}