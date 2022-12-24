#include <stdio.h>
#include <math.h>
//In ra các số nguyên tố nhỏ hơn 1000
int main()
{
    int count=0, N;
    printf("Nhap vao so N, N = "); scanf("%d",&N);
    for(int i=2;i<=N;i++) //1 không phải là số nguyên tố!
    {
        int dem = 0; //đếm ước số
        for(int j=2; j <= sqrt(i); j++) //nguyên lí đếm ước số của nguyenvanhieu.vn :D
        {
            if(i%j==0)
            {
            dem++;
            }
        }
        if(dem==0) //
        {
        count++;; //đếm số nguyên tố
        printf("\nSo nguyen to thu %d la: %d",count,i);
        }
    }
    printf("\nSo cac so nguyen to <=%d la %d",N,count);
}