#include <iostream>

class Human{
    public:
        std::string name = "No name";
        std::string ocupation = "No ocupation";
        int age = 0;

        void eat(){
            std::cout << name << " is eating." << std::endl;
        }
        void drink(){
            std::cout << name << " is drinking." << std::endl;
        }
        void sleep(){
            std::cout << name << " is sleeping." << std::endl;
        }
};

int main(){
    Human human1;
    human1.name = "Jim";
    human1.ocupation = "Salesman";
    human1.age = 30;

    std::cout << human1.name << std::endl;
    std::cout << human1.ocupation << std::endl;
    std::cout << human1.age << std::endl;

    human1.eat();
    human1.drink();
    human1.sleep();

    Human human2;
    human2.name = "Pam";
    human2.age = 25;

    std::cout << human2.name << std::endl;
    std::cout << human2.ocupation << std::endl;
    std::cout << human2.age << std::endl;

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}