#include <iostream>

enum Day{
    Sunday = 0,
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6
};

enum Flavor{
    Chocolate,
    Vanilla,
    Strawberry
};

int main(){
    Day today = Monday;

    switch(today){
        case Sunday: std::cout << "Sunday" << std::endl; break;
        case Monday: std::cout << "Monday" << std::endl; break;
        case Tuesday: std::cout << "Tuesday" << std::endl; break;
        case Wednesday: std::cout << "Wednesday" << std::endl; break;
        case Thursday: std::cout << "Thursday" << std::endl; break;
        case Friday: std::cout << "Friday" << std::endl; break;
        case Saturday: std::cout << "Saturday" << std::endl; break;
    }

    return 0;
}