#include <stdio.h>
#include <string.h>
/*
void stringInput(char *str) //truyền vào địa chỉ của chuỗi
{
    printf("Nhap chuoi: ");
    scanf("%s",str); //nhập vào một chuỗi
}
*/
void stringOutput(char str[])
{
    printf("Chuoi da nhap: %s",str); //
}
void spaceRemove(char str[])
{
    char newstr[100];
    int len = strlen(str);
    printf("\nThe first character: %c",str[0]); //%c not %s
    printf("\nString Length = %d\n",len);
    int j = 0;
    for(int i=0; i<len; i++)
    {
        if(str[i] != ' ')
        {
           newstr[j] = str[i];
            j++;
        }
        else if(str[i] == ' ')
        {
            continue;
        }
    }
    newstr[j] = '\0';
    printf("j = %d",j);
    printf("\n%s",newstr);
}
int main()
{
    char str[100] = "Driving is your hobby. Anything else?";
    //stringInput(str);
    //spaceRemove(str);
    //stringOutput(str);
    spaceRemove(str);
    printf("\n - %s -",str);
}