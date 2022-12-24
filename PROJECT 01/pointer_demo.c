#include <stdio.h>
int age = 16;
int *address = &age; //giá trị của con trỏ = giá trị của biến nằm tại địa chỉ &age;
int main()
{
    printf("%u",*address); //in ra giá trị của biến mà biến *address trỏ tới! 