//typedef gives freedom to the user by allowing them to create their own types.
//Question 7 typedef, structure
#include <stdio.h>
typedef struct CAR //typdef struct 
    {
        char *engine;
        char *fuel_type;
        int fuel_cap;
        int seating_cap;
        float city_mileage;
    } C; //"C" is a variable of "CAR" struct;
int main()
{
    //car1
C HONDA_CRV = {"1.5 turbo","gas",47,5,18};
    //car 2
C MITSUBISH_OUTLANDER = {"2.0 natural","gas",42,5,16};
    printf("++ engine: %s ++\n",MITSUBISH_OUTLANDER.engine);
    printf("++ fuel type: %s ++\n",MITSUBISH_OUTLANDER.fuel_type);
    printf("++ fuel capacity: %s ++\n",MITSUBISH_OUTLANDER.fuel_cap);
}

// Struct allow to declare an object having many data types,
// example for student, we have their name, age, class, their achivement in many subject ...,
// we can store these information in a struct to manage easily.

//typedef give the user the freedom to created their own data type