#include <iostream>

int main(){
    int secret_number;
    int guess = 0;
    int tries = 0;

    srand(time(NULL));
    secret_number = rand() % 100 + 1;

    std::cout << "---Welcome to the number guessing game!---" << std::endl;
    do{
        std::cout << "Enter your guess(1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > secret_number){
            std::cout << "Too high!" << std::endl;
        }else if(guess < secret_number){
            std::cout << "Too low!" << std::endl;
        }else{
            std::cout << "You win!" << std::endl;
            std::cout << "It took you " << tries << " tries." << std::endl;
        }
    } while (guess != secret_number);

    std::cout << "Game over!" << std::endl;

    return 0;
}