#include <stdio.h>
int CountDigit(int n) //d?m s? ch? s? có trong n
{
    int count = 0;
    while(n>0) //n is a integer number !
    {
        n/=10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    printf("n = "); scanf("%d",&n);
	printf("\nSo chu so trong %d la: %d",n,CountDigit(n));
}