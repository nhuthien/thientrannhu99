// DEMO TYPEDEF
/*
#include <stdio.h>
typedef char KITU; //typedef <existing data type> <alias_name>
int main()
{
    KITU str[10] = "Thien";
    printf("- - - %s - - -",str);
}
*/
// TYPEDEF with STRUCT
#include <stdio.h>
typedef struct PEOPLE
{
    int age;
    char nationality[20];
    char corporation[20];
    int salary;
} engineer, teacher, driver;
int main()
{
    engineer THIEN = {23,"Vietnam","Bosch",600};
    engineer KIEN = {23, "America","Nidec",800};
    teacher NGUYEN = {22,"Singapo","VUS",1000};
    driver BINH = {27,"ThaiLand","Unilever",750};
    printf("\n%d",THIEN.age);
}