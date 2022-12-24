#include <stdio.h>
int main()
{
    printf("char size: %lu byte\n", sizeof(char));
    printf("int size: %lu byte\n", sizeof(int));
    printf("short size: %lu byte\n", sizeof(short));
    printf("float size: %lu byte\n", sizeof(float));
    printf("double size: %lu bytes\n", sizeof(double));
    printf("long double size: %lu bytes\n", sizeof(long double));
}