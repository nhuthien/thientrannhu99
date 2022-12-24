#include <stdio.h>
int price[5]={3,5,7,1,2};
int main()
{
    for(int i=0;i<=4;i++)
    {
        price[i]=i+1; //gán giá trị từng phần tử cho mảng
        printf("%d",price[i]); //price[i] đóng vai trò như một con trỏ
    }
}