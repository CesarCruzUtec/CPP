#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1: std::cout << "You found a diamond!" << std::endl;
        break;
    case 2: std::cout << "You found a gold coin!" << std::endl;
        break;
    case 3: std::cout << "You found a silver coin!" << std::endl;
        break;
    case 4: std::cout << "You found a bronze coin!" << std::endl;
        break;
    case 5: std::cout << "You found a copper coin!" << std::endl;
        break;
    }
    return 0;
}