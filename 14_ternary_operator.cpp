#include <iostream>

int main(){
    int grade = 75;
    grade >= 50 ? std::cout << "Pass" << std::endl : std::cout << "Fail" << std::endl;

    int number = 9;
    number % 2 == 0 ? std::cout << "Even" << std::endl : std::cout << "Odd" << std::endl;

    bool hungry = true;
    hungry ? std::cout << "Eat" << std::endl : std::cout << "Don't eat" << std::endl;
    std::cout << "You are " << (hungry ? "hungry" : "not hungry") << std::endl;

    return 0;
}