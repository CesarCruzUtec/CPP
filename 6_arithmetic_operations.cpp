#include <iostream>

int main(){
    int students = 20;

    // Sum
    students = students + 1;
    students += 1;
    students++;

    // Subtraction
    students = students - 1;
    students -= 1;
    students--;

    // Multiplication
    students = students * 2;
    students *= 2;

    // Division
    students = students / 3;
    students /= 3;
    
    // Modulus
    int remainder = students % 2;

    // Order of operations
    students = 6 - 5 + 4 * 3 / 2;

    std::cout << students << '\n';
    std::cout << remainder << '\n';
    return 0;
}