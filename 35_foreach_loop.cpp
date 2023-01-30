#include <iostream>

int main(){

    /*
        The structure of a for-each loop is:
        for(type variable : array){
            // code
        }
        Advantage: no need to keep track of the index
        Disadvantage: cannot modify the array
    */

    std::string students[] = {"John", "Jane", "Joe"};
    for(std::string student : students){
        std::cout << student << std::endl;
    }

    int grades[] = {65,73,99,87,82};
    for(int grade : grades){
        std::cout << grade << std::endl;
    }
    return 0;
}