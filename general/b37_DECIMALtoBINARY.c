//Dec2Bin
#include <stdio.h>
#include <math.h>
int DecimaltoBinary(int DecimalNumber)
{
    int BinaryNumber = 0, p = 0;//p là số mũ
    while(DecimalNumber>0)
    {
        BinaryNumber += (DecimalNumber%2)*pow(10,p); //xem lại cách đổi từ Decimal sang Binary trong môn Kỹ thuật số
        p++;
        DecimalNumber/=2;
    }
    return BinaryNumber;
}
int main()
{
    int DecimalNumber;
    printf("Enter Decimal Number: "); scanf("%d",&DecimalNumber);
    printf("%d in Decimal is %d in Binary",DecimalNumber,DecimaltoBinary(DecimalNumber));
}