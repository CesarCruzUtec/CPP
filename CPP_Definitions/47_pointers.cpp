#include <iostream>

int main(){
    std::string Name = "John";
    std::string *pName = &Name;
    std::cout << pName << std::endl;
    std::cout << *pName << std::endl;

    int age = 30;
    int *pAge = &age;
    std::cout << pAge << std::endl;
    std::cout << *pAge << std::endl;

    // A string array is a pointer to the first element of the array,
    // so we can use it as a pointer to the array
    std::string freePizzas[5] = {"Pizza 1", "Pizza 2", "Pizza 3", "Pizza 4", "Pizza 5"};
    std::string *pFreePizzas = freePizzas;
    std::cout << pFreePizzas << std::endl;
    std::cout << *pFreePizzas << std::endl;

    return 0;
}