#include <iostream>

double getTotal(double prices[], int size);

int main(){
    double prices[] = {432.99, 123.45, 654.32, 765.43, 234.56};
    int size = sizeof(prices) / sizeof(double);
    double total = getTotal(prices, size);

    std::cout << "Total: " << total << "$" << std::endl;

    return 0;
}


/*
    We have to pass the size of the array as a parameter because
    we cannot use sizeof() inside the function. The array is passed
    by reference, so we can modify it inside the function.
*/
double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}