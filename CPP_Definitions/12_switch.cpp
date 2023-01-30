#include <iostream>

int main(){
    int month;
    std::cout << "Enter a month number (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "January" << std::endl;
        break;
    case 2:
        std::cout << "February" << std::endl;
        break;
    case 3:
        std::cout << "March" << std::endl;
        break;
    case 4:
        std::cout << "April" << std::endl;
        break;
    case 5:
        std::cout << "May" << std::endl;
        break;
    case 6:
        std::cout << "June" << std::endl;
        break;
    case 7:
        std::cout << "July" << std::endl;
        break;
    case 8:
        std::cout << "August" << std::endl;
        break;
    case 9:
        std::cout << "September" << std::endl;
        break;
    case 10:
        std::cout << "October" << std::endl;
        break;
    case 11:
        std::cout << "November" << std::endl;
        break;
    case 12:
        std::cout << "December" << std::endl;
        break;
    default:
        std::cout << "Invalid month" << std::endl;
        break;
    }

    char grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "Excellent" << std::endl;
        break;
    case 'B':
        std::cout << "Good" << std::endl;
        break;
    case 'C':
        std::cout << "Average" << std::endl;
        break;
    case 'D':
        std::cout << "Poor" << std::endl;
        break;
    case 'F':
        std::cout << "Fail" << std::endl;
        break;
    default:
        std::cout << "Invalid grade" << std::endl;
        break;
    }
    
}