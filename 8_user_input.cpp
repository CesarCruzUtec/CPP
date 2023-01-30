#include <iostream>

int main(){
    std::string name;
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your full name: ";
    //std::cin >> name; // This will only read the first word
    std::getline(std::cin >> std::ws, name); // std::ws is used to remove white spaces

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    return 0;
}