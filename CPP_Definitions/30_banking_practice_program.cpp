#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 1000.00;
    int option = 0;

    do{
        std::cout << "Welcome to the bank" << std::endl;
        std::cout << "Enter your option: " << std::endl;
        std::cout << "1. Show balance" << std::endl;
        std::cout << "2. Deposit" << std::endl;
        std::cout << "3. Withdraw" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cin >> option;

        std::cin.clear(); // clear any errors
        fflush(stdin); // clear the buffer

        switch (option){
            case 1: showBalance(balance);
                break;
            case 2: balance += deposit();
                break;
            case 3: balance -= withdraw(balance);
                break;
            case 4: std::cout << "Thank you for banking with us!" << std::endl;
                break;
            default: std::cout << "Invalid option!" << std::endl;
                break;
        }
    } while (option != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit(){
    double amount;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;
    if (amount < 0){
        std::cout << "Invalid amount!" << std::endl;
        return 0;
    } else{
        return amount;
    }
    return amount;
}

double withdraw(double balance){
    double amount;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;
    if(amount > balance){
        std::cout << "Insufficient funds!" << std::endl;
        return 0;
    } else if(amount < 0){
        std::cout << "Invalid amount!" << std::endl;
        return 0;
    } else{
        return amount;
    }
}