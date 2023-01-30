#include <iostream>

void walk(int steps);
int factorial(int num);


int main(){
    walk(5);

    std::cout << "Factorial: " << factorial(5) << std::endl;
    return 0;
}

void walk(int steps){
    if(steps == 0){
        return;
    }
    std::cout << "Step " << steps << std::endl;
    walk(steps - 1);
}

int factorial(int num){
    if(num == 1){
        return 1;
    }
    return num * factorial(num - 1);
}