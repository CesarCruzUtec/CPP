#include <iostream>

int myNum = 3; // Global variable: can be accessed anywhere in the program

void printNum();

int main(){
    int myNum = 5; // Local variable: can only be accessed in this function
    printNum();
    std::cout << ::myNum << std::endl; // Access global variable with :: operator
    return 0;
}

void printNum(){
    int myNum = 7; // Local variable: can only be accessed in this function
    std::cout << myNum << std::endl;
}