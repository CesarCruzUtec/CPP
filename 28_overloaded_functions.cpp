#include <iostream>

void bakePizza();
void bakePizza(std::string topping);
void bakePizza(std::string topping, std::string sauce);

int main(){
    bakePizza("pepperoni", "tomato");
    return 0;
}

void bakePizza(){
    std::cout << "Bake pizza for 20 minutes at 350 degrees" << std::endl;
}
void bakePizza(std::string topping){
    std::cout << "Bake pizza for 20 minutes at 350 degrees" << std::endl;
    std::cout << "Add " << topping << " to pizza" << std::endl;
}
void bakePizza(std::string topping, std::string sauce){
    std::cout << "Bake pizza for 20 minutes at 350 degrees" << std::endl;
    std::cout << "Add " << topping << " to pizza" << std::endl;
    std::cout << "Add " << sauce << " to pizza" << std::endl;
}