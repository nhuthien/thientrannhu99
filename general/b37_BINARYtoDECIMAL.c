#include <stdio.h>
int BinarytoDecimal(int BinaryNumber)
{
    int p = 0, DecimalNumber = 0;
    while(BinaryNumber>0)
    {
        DecimalNumber += (BinaryNumber%10)*pow(2,p);
        p++;
        BinaryNumber/=10;
    }
    return DecimalNumber;
}
int main()
{
    int BinaryNumber;
    printf("Enter Binary Number: "); scanf("%d",&BinaryNumber);
    printf("%d in Binary is %d in Decimal",BinaryNumber,BinarytoDecimal(BinaryNumber));
}