#include <iostream>

int main(){
    const int SIZE = 30;
    std::string foods[SIZE];
    fill(foods, foods + SIZE/3, "Pizza");
    fill(foods + SIZE/3, foods + 2*SIZE/3, "Hamburger");
    fill(foods + 2*SIZE/3, foods + SIZE, "Hot-Dog");
    
    for(std::string food : foods){
        std::cout << food << std::endl;
    }
    return 0;
}