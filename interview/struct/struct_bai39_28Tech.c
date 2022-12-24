//BAI TAP 05
#include <stdio.h>
#include <string.h>
struct STUDENT
{
    char name[20];
    char grade[10];
    char dob[20];
    float gpa;
};
typedef struct STUDENT st;
void inputstudent(int n, st *a)
{
    for(int i=0; i<n; i++)
    {

        printf("- HOC SINH [%d] -",i+1);
        getchar();
        printf("\nTen: ");
        gets(a[i].name);
        printf("Lop: ");
        gets(a[i].grade);
        printf("Ngay sinh: ");
        gets(a[i].dob);
        printf("GPA: ");
        scanf("%d",&a[i].gpa);
    }
}
void outputstudent(int n, st *a)
{
    for(int i=0; i<n; i++)
    {
        printf("- HOC SINH [%d] -",i+1);
        printf("\n%s\n%s\n%s\n%.2f\n",a[i].name,a[i].grade,a[i].dob,a[i].gpa);
    }
}
int main()
{
    st a[30];
    int n;
    printf("Nhap so hoc sinh: n = "); scanf("%d",&n);
    inputstudent(n,a); //a is a start address of declared array
    outputstudent(n,a);
}