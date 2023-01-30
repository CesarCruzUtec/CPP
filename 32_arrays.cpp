#include <iostream>

int main(){
    std::string car[3];
    
    car[0] = "Tesla";
    car[1] = "BMW";
    car[2] = "Audi";
    
    std::cout << car[0] << std::endl;
    std::cout << car[1] << std::endl;
    std::cout << car[2] << std::endl;
    
    double prices[] = {1000.0, 2000.0, 3000.0};
    std::cout << prices[0] << std::endl;
    std::cout << prices[1] << std::endl;
    std::cout << prices[2] << std::endl;
    
    return 0;
}