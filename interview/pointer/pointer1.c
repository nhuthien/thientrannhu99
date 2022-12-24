#include <stdio.h>

int main()
{
    int a = 7, b = 13;
    int *p1; //declare a pointer
    p1 = &a; 
    int *p2 = &a; // <=>  p1 = &a;
    printf("Gia tri con tro p1: %x\n",*p1);
    printf("Dia chi con tro p1: %x\n",p1);

    printf("Gia tri con tro p2: %x\n",*p2);
    printf("Dia chi con tro p2: %x\n",p2);

}