#include <iostream>

int main(){
    int temp;
    bool sunny = true;
    
    std::cout << "Enter the temperature: ";
    std::cin >> temp;
    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good" << std::endl;
    } else {
        std::cout << "The temperature is bad" << std::endl;
    }

    if(temp < 0 || temp > 30){
        std::cout << "The temperature is bad" << std::endl;
    } else {
        std::cout << "The temperature is good" << std::endl;
    }

    if(!sunny) {
        std::cout << "It is cloudy" << std::endl;
    } else {
        std::cout << "It is sunny" << std::endl;
    }
    return 0;
}