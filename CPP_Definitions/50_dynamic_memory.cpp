#include <iostream>

int main(){
    int *pNum = NULL;
    pNum = new int;

    *pNum = 8;
    std::cout << "Address: " << pNum << std::endl;
    std::cout << "Value: " << *pNum << std::endl;

    delete pNum;

    char *pGrades = NULL;
    int size;
    std::cout << "How many grades do you want to enter?: ";
    std::cin >> size;

    pGrades = new char[size];
    for(int i = 0; i < size; i++){
        std::cout << "Enter grade " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << "Grade " << i + 1 << ": " << pGrades[i] << std::endl;
    }

    delete [] pGrades;

    return 0;
}