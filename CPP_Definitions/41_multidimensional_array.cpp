#include <iostream>

int main(){
    std::string cars[][3] = {
        {"Ford", "Mustang", "Red"},
        {"BMW", "X5", "Black"},
        {"Ferrari", "Testarossa", "Red"}
    };
    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(std::string);

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}