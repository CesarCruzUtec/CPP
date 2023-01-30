#include <iostream>

double square(double length);
double cube(double length);
std::string concatString(std::string firstName, std::string lastName);

int main(){
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::string firstName = "John";
    std::string lastName = "Doe";
    std::string fullName = concatString(firstName, lastName);

    std::cout << "Area: " << area << std::endl;
    std::cout << "Volume: " << volume << std::endl;
    std::cout << "Full name: " << fullName << std::endl;

    return 0;
}

double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;
}
std::string concatString(std::string firstName, std::string lastName){
    return firstName + " " + lastName;
}