#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void string_import(char str[]) {
	printf("Enter a name: ");
	gets(str);
	printf("Your Name: %s", str);
}
int main()
{
	char str[20];
	string_import(str);
	int len = strlen(str);
	printf("\n%d\n", len);
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ' ')//NULL is "NULL pointer"
		{
			printf("\n"); continue;
		}
		printf("%c",str[i]);
	}
	return 0;
}