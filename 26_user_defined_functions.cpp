#include <iostream>

void happyBirthday(std::string guest, int age);

int main(){
    std::string name = "John";
    int age = 21;

    happyBirthday(name, age);
    return 0;
}

void happyBirthday(std::string guest, int age){
    std::cout << "Happy birthday to "<< guest << std::endl;
    std::cout << "You are " << age << " years old!" << std::endl;
}