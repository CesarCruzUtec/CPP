#include <iostream>

int main(){
    double GPA = 3.4;
    std::cout << sizeof(GPA) << " bytes" << std::endl;

    std::string name = "John";
    std::cout << sizeof(name) << " bytes" << std::endl;

    char letter = 'A';
    std::cout << sizeof(letter) << " bytes" << std::endl;

    bool isMale = true;
    std::cout << sizeof(isMale) << " bytes" << std::endl;

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::cout << sizeof(grades) << " bytes" << std::endl;
    std::cout << "Number of elements: " << sizeof(grades) / sizeof(char) << std::endl;

    std::string students[] = {"John", "Jane", "Joe"};
    std::cout << sizeof(students) << " bytes" << std::endl;
    std::cout << "Number of elements: " << sizeof(students) / sizeof(std::string) << std::endl;

    return 0;
}