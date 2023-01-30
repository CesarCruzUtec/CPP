#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char userChoice);
void chooseWinner(char userChoice, char computerChoice);

int main(){
    char playerChoice;
    char computerChoice;
    
    playerChoice = getUserChoice();
    std::cout << "You chose: ";
    showChoice(playerChoice);

    computerChoice = getComputerChoice();
    std::cout << "Computer chose: ";
    showChoice(computerChoice);

    chooseWinner(playerChoice, computerChoice);

    return 0;
}

char getUserChoice(){
    char userChoice;
    do{
        std::cout << "Rock-Paper-Scissor Game" << std::endl;
        std::cout << "Enter your choice (R, P, S): ";
        std::cin >> userChoice;
    } while(userChoice != 'R' && userChoice != 'P' && userChoice != 'S');
    return userChoice;
}

void showChoice(char userChoice){
    switch(userChoice){
        case 'R':
            std::cout << "Rock" << std::endl;
            break;
        case 'P':
            std::cout << "Paper" << std::endl;
            break;
        case 'S':
            std::cout << "Scissor" << std::endl;
            break;
    }
}

char getComputerChoice(){
    srand(time(0));
    char computerChoice;
    computerChoice = rand() % 3 + 1;
    switch(computerChoice){
        case 1: return 'R';
        case 2: return 'P';
        case 3: return 'S';
    }
}

void chooseWinner(char userChoice, char computerChoice){
    if(userChoice == computerChoice){
        std::cout << "It's a tie!" << std::endl;
    } else if(userChoice == 'R' && computerChoice == 'S'){
        std::cout << "You win!" << std::endl;
    } else if(userChoice == 'P' && computerChoice == 'R'){
        std::cout << "You win!" << std::endl;
    } else if(userChoice == 'S' && computerChoice == 'P'){
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "Computer wins!" << std::endl;
    }
}