#include <iostream>

int main(){
    std::string foods[5];
    int size = sizeof(foods) / sizeof(std::string);
    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "Press 'q' to quit or enter food #" << i + 1 << ": "; 
        std::getline(std::cin, temp);
        if(temp == "q"){
            std::cout << "Quitting..." << std::endl;
            break;
        } else{
            foods[i] = temp;
        }
    }

    std::cout << "You entered: " << std::endl;
    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << std::endl;
    }

    return 0;
}