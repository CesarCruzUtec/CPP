#include <iostream>
#include <cmath>

int main(){
    double x = 3;
    double y = 4;
    double z;

    // max: returns the larger of the two arguments
    z = std::max(x, y);
    std::cout << z << '\n';

    // min: returns the smaller of the two arguments
    z = std::min(x, y);
    std::cout << z << '\n';

    // pow: returns the value of x raised to the power of y
    z = pow(x, y);
    std::cout << z << '\n';

    // sqrt: returns the square root of x
    z = sqrt(x);
    std::cout << z << '\n';

    // abs: returns the absolute value of x
    z = abs(-x);
    std::cout << z << '\n';

    // round: rounds x to the nearest integer
    z = round(x/7);
    std::cout << z << '\n';

    // ceil: rounds x to the next highest integer
    z = ceil(x/7);
    std::cout << z << '\n';

    // floor: rounds x to the next lowest integer
    z = floor(x/7);
    std::cout << z << '\n';

    return 0;
}