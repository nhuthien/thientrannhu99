#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("Enter a string:\t"); scanf("%s",s);
    printf("-- %c --",s[2]);
    printf("Do dai chuoi: %d",strlen(s)); //enter a string address
}