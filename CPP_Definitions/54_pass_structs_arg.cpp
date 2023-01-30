#include <iostream>

struct car{
    std::string make;
    std::string model;
    int year;
};

void printCar(car &car);
void changeModel(car &car, std::string newModel);

int main(){
    car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 1969;

    car car2;
    car2.make = "Toyota";
    car2.model = "Corolla";
    car2.year = 2007;

    printCar(car1);
    printCar(car2);

    changeModel(car1, "Fiesta");
    printCar(car1);

    return 0;
}

void printCar(car &car){
    std::cout << "Make: " << car.make << std::endl;
    std::cout << "Model: " << car.model << std::endl;
    std::cout << "Year: " << car.year << std::endl;
}

void changeModel(car &car, std::string newModel){
    car.model = newModel;
}