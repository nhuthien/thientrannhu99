Question 5
#define ABS(X) (X < 0 ? -X, X) //review about the macro definition
int main()
{
    int x = 5;
    result = x++; //result is an undeclared variable
    printf("result = %d\n",result); //can't not print because the lack of "stdio.h' library
    printf("x = %d\n",x); //
}