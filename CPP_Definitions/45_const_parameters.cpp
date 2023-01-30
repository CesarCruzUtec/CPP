#include <iostream>

void printInfo(const std::string &name, const int &age);

int main(){
    std::string name = "John";
    int age = 30;

    printInfo(name, age);
    return 0;
}

void printInfo(const std::string &name, const int &age){
    name = ""; // This will not work because the parameter is const
    age = 0; // This will not work because the parameter is const
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}