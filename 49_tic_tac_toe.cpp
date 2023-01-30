#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces);
void computerMove(char *spaces);
void checkWinner(char *spaces);

const char player = 'X';
const char computer = 'O';
char gameStatus = 'C'; // 'W' = win, 'D' = draw, 'L' = lose, 'C' = continue

int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    drawBoard(spaces);
    while(gameStatus == 'C'){
        playerMove(spaces);
        drawBoard(spaces);
        checkWinner(spaces);
        if(gameStatus != 'C'){
            break;
        }

        computerMove(spaces);
        drawBoard(spaces);
        checkWinner(spaces);
    }

    return 0;
}

void drawBoard(char *spaces){
    std::cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << std::endl;
    std::cout << std::endl;
}

void playerMove(char *spaces){
    // Declare variables
    int number;
    // Loop until a valid space is found
    do{
        // Get input
        std::cout << "Enter a number (1-9): ";
        std::cin >> number;
        // Reduce number by 1 to match array index
        number--;
        // Check if space is empty
        if(spaces[number] == ' '){ 
            spaces[number] = player;
            break;
        // Check if number is valid
        } else if (number < 0 || number > 8){ 
            std::cout << "Invalid number" << std::endl;
        // Check if space is taken
        } else { 
            std::cout << "That space is already taken" << std::endl;
        }
    }while(number < 0 || number > 8 || spaces[number] != ' ');
}

void computerMove(char *spaces){
    // Declare variables
    int number;
    // Generate random number
    srand(time(NULL));
    // Loop until a valid space is found
    while(true){
        // Get random number
        number = rand() % 9;
        // Check if space is empty
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}

void checkWinner(char *spaces){
    // Declare variables
    char spaceChar; // 'X' or 'O' or ' '
    
    // Check rows
    for(int i = 0; i < 3; i++){
        spaceChar = spaces[i * 3];
        if(spaceChar != ' '){
            if(spaceChar == spaces[i * 3 + 1] && spaceChar == spaces[i * 3 + 2]){
                gameStatus = spaceChar == player ? 'W' : 'L';
            }
        }
    }

    // Check columns
    for(int i = 0; i < 3; i++){
        spaceChar = spaces[i];
        if(spaceChar != ' '){
            if(spaceChar == spaces[i + 3] && spaceChar == spaces[i + 6]){
                gameStatus = spaceChar == player ? 'W' : 'L';
            }
        }
    }

    // Check diagonals
    spaceChar = spaces[0];
    if(spaceChar != ' '){
        if(spaceChar == spaces[4] && spaceChar == spaces[8]){
            gameStatus = spaceChar == player ? 'W' : 'L';
        }
    }
    spaceChar = spaces[2];
    if(spaceChar != ' '){
        if(spaceChar == spaces[4] && spaceChar == spaces[6]){
            gameStatus = spaceChar == player ? 'W' : 'L';
        }
    }

    // Check for draw
    if(gameStatus != 'W' && gameStatus != 'L'){
        for(int i = 0; i < 9; i++){
            if(spaces[i] == ' '){
                gameStatus = 'C';
                break;
            } else {
                gameStatus = 'D';
            }
        }
    }

    // Print game status
    if(gameStatus == 'W'){
        std::cout << "You win!" << std::endl;
    } else if(gameStatus == 'L'){
        std::cout << "You lose!" << std::endl;
    } else if(gameStatus == 'D'){
        std::cout << "Draw!" << std::endl;
    }
}