#include <stdio.h>
int tangbien()
{
    static int dem[2]={4,5,6};
    dem[0]++;
    return dem[0];
}
int main()
{
    printf("Gia tri bien dem la: %u\n",tangbien());
    printf("Gia tri bien dem tt la: %u",tangbien());
}