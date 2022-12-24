#include <stdio.h>
#include <string.h>
struct sinhvien
{
    char id[20];
    char name[50];
    double gpa; //pass-by-reference
};
typedef struct sinhvien sv;
//Write some functions for entering, searching & outputing student informations.

sinhvien nhap() //ham nhap thong tin dang struct. Entering id, name & GPA.
{
    sv a;
    scanf("%s",a.id);
    scanf("%s",a.name);
    scanf("%lf",&a.gpa);
}
void output(sv a)
{
    printf("%s %s %.2lf",a.id,a.name,a.gpa);
}
int main()
{
    printf("Enter:\t"); sv a = nhap();
    for(int i=1; i<3; i++)
    {
    printf("SINH VIEN %d\n",i);
    sv i;
    printf("Enter id: ");  scanf("%s", i.id); //char
    printf("Enter your name: "); scanf("%s",i.name);
    printf("Enter GPA, GRADE: "); scanf("%lf %s", &i.gpa, i.grade); //pass-by-reference
    printf("%s - %s - %.2f - %s\n", i.name, i.id, i.gpa, i.grade); //string - string - float - string
    getchar();
    }  
    return 0;
}