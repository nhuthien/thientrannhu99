#include <stdio.h>

struct HOCSINH
{
    char name[20];
    int age;
    char grade[10];
};
typedef struct HOCSINH HS;
int main()
{
    HS hs[3];
    printf("NHAP THONG TIN SINH VIEN\n");
    for(int i=0; i<3; i++)
    {
    printf("Ten: ");
    getchar();
    gets(hs[i].name);
    printf("Lop: ");
    gets(hs[i].grade);
    printf("Tuoi: ");
    scanf("%d",&hs[i].age);
    printf("- - - - -\n");
    }
    printf("IN RA");
    for(int i=0; i<3; i++)
    {
    printf("\n- - - - -\n");
    printf("\nName: %s\nGrade: %s\nAge: %d",hs[i].name,hs[i].grade,hs[i].age);
    }
}