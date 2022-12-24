//S = 1 - 2 + 3 - 4 + ... + n;
#include <stdio.h>
int main()
{
    int n;
    int sum;
    printf("Enter n>1, n = ");  scanf("%d",&n);
    if(n%2 == 0) sum = n/(-2);
    else if(n%2 != 0) sum = (n+1)/(-2) + 1;
    printf("Sum = %d",sum);
}
// int main()
// {
//     int n, sum = 0;
//     scanf("%d",&n);
//     for(int i=1; i<n+1; i++)
//     {
//         if(i%2 != 0) sum+=i;
//         if(i%2 == 0) sum-=i;
//     }
//     printf("Sum = %d",sum);
// }