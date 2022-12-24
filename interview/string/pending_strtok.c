#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "13/10/2022"; //<=> char *s
    char str[8]; //luu gia tri: dd/mm/yy STRING
    char *token = strtok(s,"/");
    //printf("%s",token); //con trỏ trỏ đến địa chỉ
    int i=0;
    while(token != NULL)
    {
        strcpy(&str[i],token); //thao tac tren 2 con tro dia chi
        printf("%s -token\n",token); //token is a memory address
        printf("%s --\n",&str[i]); //&str: xuat chuoi bat dau tu vi tri thu [i];
        token = strtok(NULL,"/");
        i+=2;
    }
    printf("\nDo dai chuoi: %d\n",strlen(str)); //enter a string address
    char n;
    scanf("\n%c",&n); //&
    switch(n)
    {
    case '1':
        printf("%s",&str[0]);
        break;
    case '2':
        printf("%s",&str[2]);
        break;
    case '3':
        printf("%s",&str[4]);
        break;
    default:
        printf("Khong hop le!");
        break;
    }
}