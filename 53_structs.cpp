#include <iostream>

struct student{
    std::string name;
    int age;
    float gpa = 0.0;
};

int main(){
    student student1;
    student1.name = "Jim";
    student1.age = 16;
    student1.gpa = 3.2;
    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    std::cout << student1.gpa << std::endl;

    student student2;
    student2.name = "Pam";
    student2.age = 17;
    std::cout << student2.name << std::endl;
    std::cout << student2.age << std::endl;
    std::cout << student2.gpa << std::endl;

    return 0;
}