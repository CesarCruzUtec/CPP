#include <iostream>

void sort(int array[], int size);

int main(){
    int array[] = {3, 5, 2, 1, 4};
    int size = sizeof(array) / sizeof(int);

    for(int element : array){
        std::cout << element << " ";
    }
    std::cout << std::endl;

    sort(array, size);
    std::cout << "Sorted array: " << std::endl;
    for(int element : array){
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}