#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout << "--- Temperature conversor ---" << std::endl;
    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What is the temperature unit? ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;
        temp = (temp * 9 / 5) + 32;
        std::cout << "The temperature in Fahrenheit is: " << temp << std::endl;
    } else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32) * 5 / 9;
        std::cout << "The temperature in Celsius is: " << temp << std::endl;
    } else {
        std::cout << "Invalid unit" << std::endl;
    }

    return 0;
}