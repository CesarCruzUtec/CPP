#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        float gpa = 0.0;

    Student(std::string name, int age, float gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

class Car{
    public:
        std::string brand;
        std::string model;
        int year;

    Car(std::string brand, std::string model, int year){
        this->brand = brand;
        this->model = model;
        this->year = year;
    }
};

int main(){
    Student student1("Jim", 16, 3.2);
    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    std::cout << student1.gpa << std::endl;

    Car car1("Ford", "Mustang", 1969);
    std::cout << car1.brand << std::endl;
    std::cout << car1.model << std::endl;
    std::cout << car1.year << std::endl;

    return 0;
}