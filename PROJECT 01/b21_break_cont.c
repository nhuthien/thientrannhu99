#include <stdio.h>
#include <math.h>
/* Kiem tra so duoc nhap
duoc tao thanh tu bao nhieu chu so CHAN? */
int main()
{
    int last, n, temp;
    printf("\nSo n = "); scanf("%d",&n); //"&n" not "n"
    last = n;
    for (; last>0; last /= 10)
    {
        temp = last%(10);
        printf("%d\n",temp);
    }
}