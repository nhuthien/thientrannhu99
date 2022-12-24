#include <stdio.h>
//struct <the name of structure> = a data type
//typedef <existing data type> <alias_name>
typedef struct CAR xe //'C1' is the alias name corresponding to typedef syntax
{
    char name[20];
    char engine[20];
    int capacity;
    char type_of_drive_system[20];
}

int main()
{
    car c1 = {"HONDA CRV", "1.5 TURBO", 47, "FRONT"};
    car c2 = {"MITSUBISHI OUTLANDER", "2.0 NATURAL", 43, "AWD"};
    printf("%s",c1.name);
}
/*
struct [the name of structure]
{
    the definition of element;
    the definition of element;
    the definition of element;
    } [one or more structure variables]
*/
