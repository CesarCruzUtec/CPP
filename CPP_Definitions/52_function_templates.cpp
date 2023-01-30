#include <iostream>

template <typename T, typename U>
auto max(T num1, U num2){
    return (num1 > num2) ? num1 : num2;
}

int main(){
    std::cout << "Max: " << max(5.1, 10.2) << std::endl;

    return 0;
}