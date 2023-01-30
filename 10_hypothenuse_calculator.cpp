// This program calculates the length of the hypotenuse of a right triangle

#include <iostream>
#include <cmath>

// The main function
int main(){
    // Declare the variables we need
    double a;
    double b;
    double c;

    // Ask for the length of side a
    std::cout << "Enter the length of side a: ";
    std::cin >> a;
    // Ask for the length of side b
    std::cout << "Enter the length of side b: ";
    std::cin >> b;

    // Calculate the length of the hypotenuse using the Pythagorean theorem
    c = sqrt(pow(a, 2) + pow(b, 2));
    // Output the result
    std::cout << "The length of the hypotenuse is: " << c << '\n';

    return 0;
}