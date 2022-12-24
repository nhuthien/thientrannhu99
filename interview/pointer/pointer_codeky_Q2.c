#include <stdio.h>
int main(){
    int a = 100, b = 200;
    int *p = &a;
    printf("%d\n",*p); // 100;
    *p = b; //p = &b
    printf("%d\n",a); // a = 200
    return 0;
}