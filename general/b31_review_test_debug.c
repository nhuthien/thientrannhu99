#include <stdio.h>
#include <math.h>
int ReverseNumber(int n)
{
    //Tach so cuoi, tach so ke cuoi; bien renum
    int last, renum;
    renum = n%(10); //tach so cuoi
    n = n/10;
    while(n>0)
    {
        last = n%(10);
        renum = renum*10 + last;
        n = n/10;
    }
    return renum; //nho tra gia tri ve
}
int main()
{
    int n = 134; //nhap vao n
    printf("Dao nguoc cua %d la: %d",n,ReverseNumber(n));
}