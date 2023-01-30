#include <iostream>

int searchArray(int numbers[], int size, int myNumber);

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers) / sizeof(int);
    int index;
    int myNumber;

    std::cout << "Enter a number to search: " << std::endl;
    std::cin >> myNumber;

    index = searchArray(numbers, size, myNumber);
    if (index == -1){
        std::cout << "Number not found" << std::endl;
    } else {
        std::cout << "Number found at index: " << index << std::endl;
    }

    return 0;
}

int searchArray(int numbers[], int size, int myNumber){
    for(int i = 0; i < size; i++){
        if(numbers[i] == myNumber){
            return i;
        }
    }
    return -1;
}