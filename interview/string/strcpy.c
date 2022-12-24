#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "ToyotaCAMRY"; //this is a string
    char *s2 = "Prius";
    strcpy(&s1[6],s2);
    printf("%s",&s1[6]);
//  strcat(s1,s2);
//  printf("\n%s",s1);
}