#include <iostream>

class Animal{
    public:
        bool isAlive = true;
        void eat(){
            std::cout << "Animal is eating." << std::endl;
        }
};

class Dog : public Animal{
    public:
        std::string name = "No name";
        void bark(){
            std::cout << "Dog is barking." << std::endl;
        }
};

class Cat : public Animal{
    public:
        std::string name = "No name";
        void meow(){
            std::cout << "Cat is meowing." << std::endl;
        }
};

int main(){
    Dog dog1;
    std::cout << dog1.isAlive << std::endl;
    dog1.eat();
    dog1.bark();

    Cat cat1;
    std::cout << cat1.isAlive << std::endl;
    cat1.eat();
    cat1.meow();
    return 0;
}