#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid" << std::endl;
    } else {
        std::cout << cardNumber << " is invalid" << std::endl;
    }

    return 0;
}

int getDigit(const int number){
    return number % 10 + number / 10;
}

int sumEvenDigits(const std::string cardNumber){
    int sum = 0;
    int digit = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2){
        digit = getDigit((cardNumber[i] - '0') * 2);
        sum += digit;
    }

    return sum;
}

int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    int digit = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2){
        digit = cardNumber[i] - '0';
        sum += digit;
    }

    return sum;
}

