#include <iostream>

int main(){
    std::string questions[] = {
        "1. What year was C++ created?",
        "2. Who created C++?",
        "3. What is the predecessor of C++?",
        "4. What is the name of the standard library for C++?",
    };

    std::string options[][4] = {
        {"A. 1990", "B. 1995", "C. 1985", "D. 1980"},
        {"A. Bjarne Stroustrup", "B. Dennis Ritchie", "C. James Gosling", "D. Guido van Rossum"},
        {"A. C", "B. Java", "C. Python", "D. C#"},
        {"A. STL", "B. MTL", "C. ATL", "D. LTL"},
    };

    char answerKey[] = {'B', 'A', 'A', 'A'};

    int sizeQuestions = sizeof(questions) / sizeof(questions[0]);
    int sizeOptions = sizeof(options) / sizeof(options[0]);
    char guess;
    int score;

    for(int i = 0; i < sizeQuestions; i++){
        std::cout << "--- Question " << i + 1 << " ---" << std::endl;
        std::cout << questions[i] << std::endl;
        std::cout << "Options: " << std::endl;

        for(int j = 0; j < sizeOptions; j++){
            std::cout << options[i][j] << std::endl;
        }
        std::cout << "Enter your answer: ";
        std::cin >> guess;
        guess = toupper(guess);
        if(guess == answerKey[i]){
            std::cout << "Correct!" << std::endl;
            score++;
        } else{
            std::cout << "Wrong!" << std::endl;
            std::cout << "The correct answer is " << answerKey[i] << std::endl;
        }
    }

    std::cout << "RESULT" << std::endl;
    std::cout << "You got " << score << " out of " << sizeQuestions << " questions correct." << std::endl;
    std::cout << "Your score is " << (score * 100) / sizeQuestions << "%" << std::endl;

    return 0;
}