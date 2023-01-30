#include <iostream>

int main(){
    // Continue: skip the rest of the loop and continue with the next iteration
    // Break: exit the loop
    for(int i=1; i<=20; i++){
        if(i==13){
            continue;
        } else if(i==15){
            break;
        }
        std::cout << i << std::endl;
    }
    return 0;
}