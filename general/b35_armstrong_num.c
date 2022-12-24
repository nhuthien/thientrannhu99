#include <stdio.h>
#include <math.h>
#include <stdbool.h>
//Is any number a Armstrong number?

int CountDigit(int n) //đếm số chữ số có trong n
{
    int count = 0;
    while(n>0) //n is a integer number !
    {
        n/=10;
        count++;
    }
    return count;
}
bool IsArmStrong(int n) //có phải số Armstrong không? bool: true or fasle?
{
    int DigitNumber = CountDigit(n);
    int last, sum, temp=n; //Keep n constantly in order to compare to 'sum' value
    while(temp>0)
    {
        last = temp%(10);
        sum += pow(last,DigitNumber);
        temp/=10;
} //Finish While() loop
    if(sum==n) return true; //IsArmstrong() is a boolean function!
    return false;
}
int main()
{
    int n;
    printf("Enter: n = "); scanf("%d",&n);
    if(IsArmStrong(n) == true)
    {
        printf("%d is a Armstrong number!",n);
    }
    else{
        printf("%d isn't a Armstrong number!",n);
    }
}