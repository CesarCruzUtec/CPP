#include <iostream>

int main(){
    int *pointer = nullptr;
    int x = 5;

    pointer = &x;
    if(pointer == nullptr){
        std::cout << "Pointer is null" << std::endl;
    } else {
        std::cout << "Pointer is not null" << std::endl;
        std::cout << *pointer << std::endl;
    }

    return 0;
}