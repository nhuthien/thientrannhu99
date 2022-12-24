/*
#include <stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int result;
    int (*ptr)(int, int) = add ??; //pointer to function
    result = ptr(10,6);
    printf("%d",result);
}

//FUNCTION POINTER PRACTICE demo
#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int (*fptr)(int a, int b) = &sum; //a function pointer return an integer;
    printf("sum = %d\n",fptr(5,7));
}
//function pointer holds the memory address of a function
*/

//FUNCTION POINTER PRACTICE
/*
#include <stdio.h>
//declare an array of function pointer
int a = 6, b = 7; // 0110 vs. 0111
int and_operator(int a, int b)
{
    return a & b;
}
int or_operator(int a, int b)
{
    return a | b;
}
int xor_operator(int a, int b)
{
    return a^b;
}
int(*afptr[])(int a, int b) =
{
    &and_operator,
    &or_operator,
    &xor_operator
};
void main()
{
    printf("a AND b = %d\n",(afptr[0])(a,b));
    printf("a OR b = %d\n",(afptr[1])(a,b));
    printf("a XOR b = %d",(afptr[2])(a,b));
}
*/

//QUESTION 6_MrGIAHOANG
#include <stdio.h>
int func(int a, int b)
{
    return a+b;
}
 // declare a function that contains 2 integer arguments and return void value
int (*fptr)(int a,int b; //declare a function pointer
int main()
{
    fptr = &func; //point to the function address
    int a = 5, b = 3;
    int i;
    i = fptr(a,b);
    printf("-- %d --",i);
}