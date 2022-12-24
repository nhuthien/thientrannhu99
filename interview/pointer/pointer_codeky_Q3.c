#include <stdio.h>
int main(){
    int a = 5, b = 10, c;
    int *pa = &a, *pb = &b; // <=> pa = &a;
    c = pb - pa; // pb = &b, pa = &a
    printf("%d\n",pa);
    printf("%d\n",pb);
    printf("%d",c); // c = ?
    return 0;
}