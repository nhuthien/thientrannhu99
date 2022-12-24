//Question 7 typedef, structure
#include <stdio.h>
struct CAR
    {
        char *engine;
        char *fuel_type;
        int fuel_cap;
        int seating_cap;
        float city_mileage;
    } car1, car2;
int main()
{
    //car1
    car1.engine = "1.5 turbo";
    car1.fuel_type = "gas";
    car1.fuel_cap = 47;
    car1.seating_cap = 5;
    car1.city_mileage = 18;
    //car 2
    car2.engine = "2.0 natural";
    car2.fuel_type = "gas";
    car2.fuel_cap = 42;
    car2.seating_cap = 5;
    car2.city_mileage = 16;
    printf("%s\n",car2.engine);
}