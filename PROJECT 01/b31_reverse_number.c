#include <stdio.h>
int ReverseNumber(int n)
{
    int last, renum=n%(10);
    n/=10;
    while(n>0) //n is a integer number!
    { //tach lan luot tung so cuoi cua n
        last = n%(10); //tach so cuoi tiep theo
        renum = renum*10 + last; //refresh renum value after a loop
        n/=10; //loai di mot so cuoi
    }
    return renum;
}
int main()
{
    int n;
    printf("Enter n, n = "); scanf("%d",&n);
    printf("So dao nguoc cua %d la: %d",n,ReverseNumber(n));
}